## this truncate function you can find in here - https://github.com/tlsfuzzer/python-ecdsa/blob/master/src/ecdsa/keys.py


'''
def _truncate_and_convert_digest(digest, curve, allow_truncate):
    """Truncates and converts digest to an integer."""
    if not allow_truncate:
        if len(digest) > curve.baselen:
            raise BadDigestError(
                "this curve ({0}) is too short "
                "for the length of your digest ({1})".format(
                    curve.name, 8 * len(digest)
                )
            )
    else:
        digest = digest[: curve.baselen]
    number = string_to_number(digest)
    if allow_truncate:
        max_length = bit_length(curve.order)
        # we don't use bit_length(number) as that truncates leading zeros
        length = len(digest) * 8

        # See NIST FIPS 186-4:
        #
        # When the length of the output of the hash function is greater
        # than N (i.e., the bit length of q), then the leftmost N bits of
        # the hash function output block shall be used in any calculation
        # using the hash function output during the generation or
        # verification of a digital signature.
        #
        # as such, we need to shift-out the low-order bits:
        number >>= max(0, length - max_length)

    return number
'''

# This is the truncation function used, it takes 24 leftmost bytes and then take hash of it,
## so without hash function being used, it will take leftmost 24 bytes and sign that value

import requests
import string
import json

username = 'mritunjya'
r = requests.get(f'https://web.cryptohack.org/digestive/sign/{username}')
sig = r.json()["signature"]

sanitized_username = "".join(a for a in username if a in string.ascii_lowercase)
msg = json.dumps({"admin": False, "username": sanitized_username})
msg = msg[:24]

print(msg)

msg_true = msg + 'me": "mritunjya", "admin": true}'

r2 = requests.get(f'https://web.cryptohack.org/digestive/verify/{msg_true}/{sig}')
print(r2.json())

''' {'flag': 'crypto{thanx_for_ctf_inspiration_https://mastodon.social/@filippo/109360453402691894}'}''
'
