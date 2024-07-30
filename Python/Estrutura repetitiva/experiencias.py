# Variáveis
quantCoSoma = 0
quantCoeSoma = 0
quantRaSoma = 0
quantSaSoma = 0

# Entrada de dados
quant = int(input("Digite a quantidade de casos que você vai trabalhar: "))

# Estrutura repetitiva
for i in range (0, quant):
    quantCo = int(input("Quantidade de cobaia(s): "))
    tipoCo = input("Tipo de coboia: ")

    # Algoritmo matemático
    quantCoSoma = quantCoSoma + quantCo

    # Estrutura condicional
    if (tipoCo == 'C'):
        quantCoeSoma = quantCoeSoma + quantCo
    elif (tipoCo == 'R'):
        quantRaSoma = quantRaSoma + quantCo
    else:
        quantSaSoma = quantSaSoma + quantCo

    # Total de todas as cobaias 
    totalCo = quantCoeSoma + quantRaSoma + quantSaSoma

    # Percentuais
    percCoe = quantCoeSoma / totalCo * 100
    percRa = quantRaSoma / totalCo * 100
    percSa = quantSaSoma / totalCo * 100

# Saída de dados
print(f"\nRelatório final\nTotal: {quantCoSoma} cobaia(s).\nTotal de coelhos: {quantCoeSoma}.\nTotal de ratos: {quantRaSoma}.\nTotal de sapos: {quantSaSoma}.\nPercentual de coelhos: {percCoe:.2f}.\nPercentual de ratos: {percRa:.2f}.\nPercentual de sapos: {percSa:.2f}.")