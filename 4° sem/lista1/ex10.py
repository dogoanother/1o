# Crie o seguinte padrão sem codificação, usando apenas funções numpy e a matriz de entrada abaixo ‘a’. 

import numpy as np 

m = np.array([1, 2, 3])
m2 = np.r_[np.repeat(m, 3), np.tile(m, 3)]
print("Output: ", m2)