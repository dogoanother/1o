# substitua todos os numeros impares em arr com -1 sem alterar arr

import numpy as np

arr=np.array([0,1,2,3,4,5,6,7,8,9])
i= np.where(arr % 2==1, -1, arr)
print(arr, i)