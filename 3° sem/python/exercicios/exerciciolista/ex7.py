vetor = []
for i in range(5):
    numero = int(input("Digite o número {}: ".format(i + 1)))
    vetor.append(numero)

soma = sum(vetor)

multiplicacao = 1
for numero in vetor:
    multiplicacao *= numero

print("Números digitados:", vetor)
print("Soma dos números:", soma)
print("Multiplicação dos números:", multiplicacao)
