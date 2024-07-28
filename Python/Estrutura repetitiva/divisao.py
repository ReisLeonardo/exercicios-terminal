# Entrada de dados
quant = int(input("Digite quantos casos você vai digitar: "))

# Estrutura repetitiva
for i in range(0, quant):
    num = int(input("Entre com o numerador: "))
    den = int(input("Entre com o denominador: "))

    if (den == 0):
        print("Divisão impossível!")
    else:
        divisao = num / den
        print(f"A divisão entre {num} ÷ {den} é {divisao}.")