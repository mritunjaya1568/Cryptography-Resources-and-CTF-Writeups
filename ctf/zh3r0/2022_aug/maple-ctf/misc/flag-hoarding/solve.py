import os
import sys
import re
import time
import imghdr
from PIL import Image 

img_pil = Image.open(f"LEAK.jpeg")
img_pil = img_pil.convert('RGBA') 
img = f"leak_zsteg.png"
img_pil.save(f"{img}")

