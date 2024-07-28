# Variável
dentro = 0
fora = 0

# Entrada de dados
quant = int(input("Quantos números você vai digitar? "))

# Estrutura repetitiva
for i in range(0, quant):
    num = int(input("Digite um número: "))
    if num > 20 or num < 10:
        fora = fora + 1
    else:
        dentro = dentro + 1

# Saída de dados
print(f"De acordo com os dados digitados temos {dentro} na parte de dentro e {fora} na parte de fora.")