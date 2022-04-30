import jwt # note this is the PyJWT module (version 1.5.0), not python-jwt


# Private key generated using: openssl genrsa -out rsa-or-hmac-2-private.pem 2048
with open('challenge_files/rsa-or-hmac-2-private.pem', 'rb') as f:
   PRIVATE_KEY = f.read()
# Public key generated using: openssl rsa -RSAPublicKey_out -in rsa-or-hmac-2-private.pem -out rsa-or-hmac-2-public.pem
with open('challenge_files/rsa-or-hmac-2-public.pem', 'rb') as f:
   PUBLIC_KEY = f.read()

FLAG = ?


@chal.route('/rsa-or-hmac-2/authorise/<token>/')
def authorise(token):
    try:
        decoded = jwt.decode(token, PUBLIC_KEY)
    except Exception as e:
        return {"error": str(e)}

    if "admin" in decoded and decoded["admin"]:
        return {"response": f"Welcome admin, here is your flag: {FLAG}"}
    elif "username" in decoded:
        return {"response": f"Welcome {decoded['username']}"}
    else:
        return {"error": "There is something wrong with your session, goodbye"}


@chal.route('/rsa-or-hmac-2/create_session/<username>/')
def create_session(username):
    encoded = jwt.encode({'username': username, 'admin': False}, PRIVATE_KEY, algorithm='RS256')
    return {"session": encoded.decode()}