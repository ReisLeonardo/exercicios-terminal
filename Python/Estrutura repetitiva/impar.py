# Entrada de dados
quant = int(input("Digite quantos números você vai digitar: "))

# Estrutura repetitiva
for i in range(0, quant):
    # Entrada de dados
    num = int(input("Digite um número: "))
    # Estrutura condicional com saída de dados
    if (num < 0 and num %2 != 0):
        print("Ímpar negativo!")
    elif (num < 0 and num %2 == 0):
        print("Par negativo!")
    elif (num == 0):
        print("Nulo!")
    elif (num > 0 and num %2 != 0):
        print("Ímpar positivo!")
    else:
        print("Par positivo!")