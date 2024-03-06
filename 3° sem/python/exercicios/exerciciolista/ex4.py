v1=str(input("digite ate 10 caracteres: "))
consoantes = "bcdfghjklmnpqrstvwxyz"
n1=0


lim=len(v1)


if lim < 10:
    for letra in v1:
        if letra in consoantes:
            n1 += 1
    print(f"tem {n1} letras consoantes")

else:
    print('ate 10 caracteres')