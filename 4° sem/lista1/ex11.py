# Encontre todos os picos em uma matriz 1D numpy ‘a’. Picos são pontos cercados por valores menores em ambos os lados. 

import numpy as np 

m1=np.array([1,3,7,1,2,6,0,1])
m2=np.diff(np.sign(np.diff(m1)))
m3=np.where(m2 == -2)[0]+1
print (m3)