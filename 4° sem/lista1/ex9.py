# empilhe matrizes horizontalmente 

import numpy as np 

arr= np.arange(10).reshape(2,-1)
arr2=np.repeat (1,10).reshape(2,-1)

print (np.concatenate([arr, arr2], axis=1))