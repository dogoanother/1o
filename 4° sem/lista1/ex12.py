# Após isso, imprima as duas matrizes. Crie uma matriz C usando a seguinte operação C = A * B

import numpy as np 

m1=np.array([1,3,7,1,2,6,0,1])
m2=np.diff(np.sign(np.diff(m1)))
m3=np.where(m2 == -2)[0]+1
print (m3)


matriz_um = np.array([[12, 9, 4, 1], [11, 5, 8, 1], [1, 2, 3, 1]])
matriz_dois = np.array([[1, 5], [1, 7], [1, 9], [1, 1]])
matriz_tres = np.dot(matriz_um, matriz_dois)
print("Matriz Três (C = A * B): ", matriz_tres)
