n1= float (input('digite a nota parcial: '))
n2= float (input('digite a nota final: '))
nf=(n1+n2)/2

print(' a media final do aluno foi: ', nf)

if nf<7:
    print('o aluno esta reprovado')

else: 
    if nf==10:
        print('o aluno foi aprovado com distincao ')
    if 7<=nf<10 :
        print('o aluno foi aprovado')