n1=[]
i=0
m=0

while i<4:
    v1=float(input("Digite a nota: "))
    n1.append(v1)
    i=i+1

print('as notas são: ', n1)



soma=sum(n1)
m=soma/4
print( 'a media é: ', m)