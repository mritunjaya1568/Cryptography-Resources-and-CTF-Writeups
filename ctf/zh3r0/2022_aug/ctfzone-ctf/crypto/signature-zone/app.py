from flask import Flask, request, Response
from py_ecc.bls import G2ProofOfPossession as bls_pop
import os
from dotenv import load_dotenv
import json

# initialization
app = Flask(__name__)
load_dotenv()
secret_key = dict()
public_key = dict()
signatures = dict()
Num = 10
message = str.encode(json.dumps({'flag': False}))
for i in range(1, 11):
    secret_key[i] = int(os.getenv('sk'+str(i)))
secret_flag = str(os.getenv('flag'))
for i in range(1, Num + 1):
    public_key[i] = bls_pop.SkToPk(secret_key[i])
for i in range(1, Num + 1):
    signatures[i] = bls_pop.Sign(secret_key[i], message)
print('Init complete')


@app.route("/api/pubkey/<int:user_id>", methods=["GET"])
def get_pub_key(user_id):
    if request.method == 'GET':
        try:
            n = int(user_id)
            if n > Num or n < 1:
                return Response(json.dumps({'error': 'Invalid element number'}), status=400,
                                mimetype='application/json')
            return Response(json.dumps({'pubkey': str(public_key[n].hex())}), status=200, mimetype='application/json')
        except Exception:
            return Response(json.dumps({'error': 'Exception occurred'}), status=500, mimetype='application/json')


@app.route("/api/sig/<int:user_id>", methods=["GET"])
def get_sig(user_id):
    if request.method == 'GET':
        try:
            n = int(user_id)
            if n > Num or n < 1:
                return Response(json.dumps({'error': 'Invalid element number'}), status=400,
                                mimetype='application/json')
            return Response(json.dumps({'sig': str(signatures[n].hex())}), status=200, mimetype='application/json')
        except Exception:
            return Response(json.dumps({'error': 'Exception occurred'}), status=500, mimetype='application/json')


@app.route('/api/validate', methods=['POST'])
def validate():
    if request.method == 'POST':
        try:
            if not request.data:
                return Response(json.dumps({'error': 'Json body required'}), status=400, mimetype='application/json')

            content = request.get_json(silent=False, force=True)
            if 'message' not in content or 'pubkey' not in content \
                    or 'signature' not in content:
                return Response(json.dumps({'error': 'message, pubkey and signature required'}), status=400,
                                mimetype='application/json')

            # Convert
            user_sig = bytes.fromhex(content['signature'])
            user_mess = bytes.fromhex(content['message'])
            user_pubkey = bytes.fromhex(content['pubkey'])

            # Security checks
            if not bls_pop._is_valid_signature(user_sig):
                return Response(json.dumps({'error': 'Signature is invalid'}), status=403, mimetype='application/json')
            if not bls_pop._is_valid_pubkey(user_pubkey):
                return Response(json.dumps({'error': 'Public key is invalid'}), status=403, mimetype='application/json')

            # Calculate aggregate signature and public key
            agg_pubkey = bls_pop._AggregatePKs((list(public_key.values()) + [user_pubkey]))
            agg_sign = bls_pop.Aggregate((list(signatures.values()) + [user_sig]))

            # Security checks
            if not bls_pop._is_valid_signature(agg_sign):
                return Response(json.dumps({'error': 'Aggregate signature is invalid'}), status=403,
                                mimetype='application/json')
            if not bls_pop._is_valid_pubkey(agg_pubkey):
                return Response(json.dumps({'error': 'Aggregate public key is invalid'}), status=403,
                                mimetype='application/json')

            if bls_pop.Verify(agg_pubkey, user_mess, agg_sign):
                user_mess_json = json.loads(user_mess)
                if user_mess_json['flag'] == True:
                    return Response(json.dumps({'flag':str(secret_flag)}), status=200, mimetype='application/json')
                else:
                    return Response(json.dumps({'flag': 'No flag here'}), status=200, mimetype='application/json')
            else:
                return Response(json.dumps({'error': 'Validation failed'}), status=403, mimetype='application/json')
        except Exception:
            return Response(json.dumps({'error': 'Exception occurred'}), status=500, mimetype='application/json')


if __name__ == '__main__':
    from waitress import serve
    serve(app, host="0.0.0.0", port=8000)
    #app.run(debug=False, host='0.0.0.0', port=8000)
