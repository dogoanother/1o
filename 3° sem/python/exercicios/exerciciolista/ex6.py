medias = []

for i in range(1, 11):
    print(f"Notas do aluno {i}:")
    notas = []
    for j in range(1, 5):
        nota = float(input(f"Nota {j}: "))
        notas.append(nota)
    
    media = sum(notas) / len(notas)
    
    medias.append(media)

num_alunos_aprovados = sum(1 for media in medias if media >= 7.0)

print(f"Número de alunos com média maior ou igual a 7.0: {num_alunos_aprovados}")
