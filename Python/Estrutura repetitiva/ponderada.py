# Entrada de dados
quant = int(input("Quantos casos você vai digitar? "))

# Estrutura repetitiva
for i in range(0, quant):
    # Entrada de dados
    num1 = float(input("Digite o primeiro número: "))
    num2 = float(input("Digite o segundo número: "))
    num3 = float(input("Digite o terceiro número: "))

    # Algoritmo matemático
    media = (num1*2 + num2*3 + num3*5) / 10

    # Saída de dados
    print(f"A média de {num1:.1f} + {num2:.1f} + {num3:.1f} é {media:.1f}")