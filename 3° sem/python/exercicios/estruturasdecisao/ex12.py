dinh= float(input('seu salario por hora'))
hr= float(input('horas trabalhadas'))
dinf= dinh*hr


def imposto(dinf):
    ir=0
    iss=0
    if dinf<=900:
        print('isento de imposto e fgts com valor de ', dinf*(11/100))
        print('valor liquido = ', dinf)

    if 900<dinf<=2500:
        ir=dinf*(5/100)
        iss=dinf*(10/100)
        print('impostos :\n IR= {}\n ISS= {}'.format(ir, iss))
        print('salario liquido=', dinf-(ir+iss))

    if dinf>=2500:
        ir=dinf*(5/100)
        iss=dinf*(20/100)
        print('impostos :\n IR= {}\n ISS= {}'.format(ir, iss))
        print('salario liquido=', dinf-(ir+iss))


imposto(dinf)