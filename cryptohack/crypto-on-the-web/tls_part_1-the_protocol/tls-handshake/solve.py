# not working - check again in future to find the correct sol




# We will use scapy to solve this task programmatically:
# https://scapy.readthedocs.io/


# Import scapy to read the pcap file and dissect the packets
# Load layer is needed to load the tls layer otherwise
# scapy will not know how to dissect the packets
from scapy.all import rdpcap, load_layer, IP, raw
# We also need to actually import the TLS layer
from scapy.layers.tls import *


# This load the pcap file
# And we can Iterate over the packets in a for loop
# Neat!
pkts = rdpcap('./cryptohack.org.pcapng')

# loading the tls layer
load_layer("tls")

# Iterate over the packets
for pkt in pkts:
    # Here we filter for the intersting packet
    # We assume there's only one for simplicity
    # The packet we want has soure ip '178.62.74.206'
    # We also check that it has TLSServerHello layer
    if TLSServerHello in pkt and pkt[IP].src == '178.62.74.206':
        # pkt here is the packet we wanted
        # we could visualize it with pkt[TLSServerHello].show()

        """
        Sadly, we can't simply do pkt[TLSServerHello].random_bytes as this will give the wrong value...
        We'll need to take the raw_bytes and convert it into a TLS13ServerHello object before.
        Why??? Well it turns out that scapy can't properly parse TLS1.3 packets (for now).
        The reason is likely to lie in the design of TLS1.3 itself and an incomplete implementation in scapy.
        TLS1.3 was found to be incompatible with some middleboxes, which may cause issues.
        Therefore TLS1.3 was designed to "look" like TLS1.2
        Check out this link for more info: https://datatracker.ietf.org/doc/html/rfc8446#appendix-D.4
        """
        raw_bytes = raw(pkt[TLSServerHello])
        # Here we create a TLS13ServerHello object from the raw_bytes
        tls13_server_hello = TLS13ServerHello(raw_bytes)
        # Now we can use the object to get the random_bytes or nonce
        # Was all this necessary for 15 points? ¯\_(ツ)_/¯
        print(tls13_server_hello.random_bytes.hex())