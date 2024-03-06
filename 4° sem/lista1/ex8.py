# empilhe matrizes verticalmente 

import numpy as np

arr= np.arange(10).reshape(2,-1)
arr2=np.repeat (1,10).reshape(2,-1)
print(arr, arr2)
print(np.concatenate([arr, arr2], axis=0))