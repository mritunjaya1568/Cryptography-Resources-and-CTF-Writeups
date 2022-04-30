# coding: utf-8
get_ipython().run_line_magic('clear', '')
get_ipython().run_line_magic('ls', '')
K = GF(Integer(3)**Integer(6),'b')
K
b = K.gen()
b
K.gen()
a = b**Integer(210)
discrete_log(a,b)
b
a
c
log(mod(a,Integer(3)**Integer(6)),mod(b,Integer(3)**Integer(6)))
get_ipython().run_line_magic('clear', '')
get_ipython().run_line_magic('ls', '')
log(Mod(Integer(6),Integer(7)), Mod(Integer(3),Integer(7)))
get_ipython().run_line_magic('ls', '')
get_ipython().run_line_magic('pwd', '')
get_ipython().run_line_magic('ls', '')
get_ipython().run_line_magic('cd', '..')
get_ipython().run_line_magic('ls', '')
get_ipython().run_line_magic('cd', 'export-grade/')
get_ipython().run_line_magic('ls', '')
get_ipython().run_line_magic('save', 'current_session ~0/')
get_ipython().run_line_magic('clear', '')
get_ipython().run_line_magic('ls', '')
get_ipython().run_line_magic('cat', 'current_session.py')
get_ipython().run_line_magic('clear', '')
get_ipython().run_line_magic('ls', '')
p = "0xde26ab651b92a129"
p = int(p,Integer(16))
g = Integer(2)
A = "0x8181a568687a4104"
A = int(A,Integer(16))
log(Mod(A,p),Mod(g,p))
a = log(Mod(A,p),Mod(g,p))
pow(g,a,p)
A
B = "0x3740d7eb5d9434ef"
B = int(B,Integer(16))
secret = pow(B,a,p)
secret
get_ipython().run_line_magic('save', 'current_session.py ~0/')
