# Entrada de dados
n = int(input("Serão digitados quantos produtos? "))

# Vetores
nome: [str] = ['' for i in range(n)]
precoC: [float] = [0 for i in range(n)]
precoV: [float] = [0 for i in range(n)]

# Estrutura repetitiva
for i in range(0, n):
    print(f"Produto {i+1}:")
    nome[i] = input("Nome: ")
    precoC[i] = float(input("Preço de compra: "))
    precoV[i] = float(input("Preço de venda: "))

# Variáveis
abaixo = 0
entre = 0
acima = 0
totalC = 0
totalV = 0
totalL = 0

# Estrutura repetitiva para armazenar a quantidade de lucros em porcentagens
for i in range(0,n):
    lucro = precoV[i] - precoC[i]
    percLucro = lucro * 100 / precoC[i]

    # Condicional para percentuais
    if percLucro < 10:
        abaixo += 1
    elif percLucro <= 20:
        entre += 1
    else:
        acima += 1

# Estrutura repetitiva para saída de dados
for i in range(0, n):
    totalC += precoC[i]
    totalV += precoV[i]

# Algoritmo matemático
totalL = totalV - totalC

# Saída de dados
print(f"\nRelatório:\nLucro abaixo de 10%: {abaixo}\nLucro entre 10% e 20%: {entre}\nLucro acima de 20%: {acima}\nValor total de compra: R${totalC}\nValor total de venda: R${totalV}\nLucro total: R${totalL}")