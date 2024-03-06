# crie uma matriz d com valores das duas  ultimas cilunas de a. depois calcule a media dos valores de d

import numpy as np 

matriz_a = np.array([[12, 9, 4, 1], [11, 5, 8, 1], [1, 2, 3, 1]])
matriz_b = matriz_a[:, -2:]
matriz_c = np.mean(matriz_c)
print('Média: ', round(matriz_c, 3))