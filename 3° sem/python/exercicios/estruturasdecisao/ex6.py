n1 = float (input('digite o primeiro numero '))
n2 = float (input('digite o segundo numero '))
n3 = float (input('digite o terceiro numnero '))

if n1<n2>n3:
    print('o segundo numero e o maior', n2)
 
if n2<n1>n3:
    print (' o primeiro numero e o maior ', n1)

if n1<n3>n2:
    print(' o terceiro valor e o maior ', n3)

# 7
if n1>n2<n3:
    print('o segundo numero e o menor', n2)
 
if n2>n1<n3:
    print (' o primeiro numero e o menor ', n1)

if n1>n3<n2:
    print(' o terceiro valor e o menor ', n3)