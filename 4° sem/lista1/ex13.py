#  Crie uma função que retorne a média e o desvio padrão das linhas de uma matriz e a média e desvio padrão das colunas de uma matriz. Depois teste sua função com a matriz C. 

import numpy as np 


def diff(matriz):
    row = np.mean(matriz, axis=1)
    col = np.mean(matriz, axis=0)

    row_diff = np.std(matriz, axis=1)
    col_diff = np.std(matriz, axis=0)

    return row, row_diff, col, col_diff


matriz_c = np.array([[35, 116], [47, 68], [7, 29]])

row, row_diff, col, col_diff = diff(matriz_c)

print("Média das linhas:", row)
print("\nDesvio padrão das linhas:", row_diff)
print("\nMédia das colunas:", col)
print("\nDesvio padrão das colunas:", col_diff)