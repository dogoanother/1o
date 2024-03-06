n= ('0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15')
n1=n.split()
s1=0
print ('os numeros sao: ', n1)

print ('o intervalo de 1 a 9: ', n1[1:9])

print ('o intervalo de 8 a 13: ', n1[8:13])

print ('os numeros pares sao: ', n1[::2])

print ('os numeros impares sao: ', n1[1::2])

print('todos os numeros multiplos de 2: {} \n multiplos de 3 {}\n multiplos de 4 {}'. format(n1[::2], n1[::3], n1[::4]))

n1.reverse()
print ('lista reversa: ', n1)

s1=s1+n[10:15]
print ('razão entre a soma do intervalo de 10 a 15 pelo intervalo de 3 a 9 em float: ', s1) 