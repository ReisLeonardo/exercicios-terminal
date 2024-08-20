# Entrada de dados
n = int(input("Quantas pessoas você vai digitar? "))

# Criando vetores
nome: [str] = [0 for x in range(n)]
idade: [int] = [0 for x in range(n)]

# Estrutura repetitiva
for i in range(0, n):
    print(f"Dados da {i+1}a pessoa:")
    nome[i] = input("Nome: ")
    idade[i] = int(input("Idade: "))

# Variável para o maior
maior = idade[0]
posMaior = 0

# Estrutura repetitiva
for i in range(1, n):
    # Estrutura condicional
    if idade[i] > maior:
        maior = idade[i]
        posMaior = i

print(f"A pessoa mais velha é: {nome[posMaior]}")