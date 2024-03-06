# converta uma matriz 1d pra uma matriz 2d com 2 linhas

import numpy as np

m1=np.arange(10)
m2=m1.reshape(2,-1)

print (m2)