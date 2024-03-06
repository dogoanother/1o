# substitua todos os numeros impares por -1

import numpy as np

arr=np.array([0,1,2,3,4,5,6,7,8,9])
i=arr[arr % 2== 1]
i2= i = -1
print ('numeros impares modificado', i2)