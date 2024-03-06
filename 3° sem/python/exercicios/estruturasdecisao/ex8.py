p1 = float (input('digite o preco do primeiro produto '))
p2 = float (input('digite o preco do segundo produto '))
p3 = float (input('digite o terceiro preco '))


if p1>p2<p3:
    print('o segundo preco e o menor', p2)
 
if p2>p1<p3:
    print (' o primeiro preco e o menor ', p1)

if p1>p3<p2:
    print(' o terceiro valor e o menor ', p3)