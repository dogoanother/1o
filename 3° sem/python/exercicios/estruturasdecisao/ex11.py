din=float(input('digite seu salario pre reajuste '))
end=0

if din<280:
    print('seu salario de {} teve um almento de  20%'.format(din) )
    end=din+din*(20/100)


if 280<din<700:
    print('seu salario de {} teve um almento de  15%'.format(din) )
    end=din+din*(15/100)


if 700<din<1500:
    print('seu salario de {} teve um almento de  10%'.format(din) )
    end=din+din*(10/100)


if 1500<din:
    print('seu salario de {} teve um almento de  5%'.format(din) )
    end=din+din*(5/100)

print('seu salario de ', din)
print('teve um almento de ', end-din)
print('valor pos reajuste: ', end)