# Variável
soma = 0
media = 0
cont = 0

# Entrada de dados
n = int(input("Quantas pessoas serão digitadas: "))

# Vetores
nome: [str] = [0 for x in range(n)]
idade: [int] = [0 for x in range(n)]
alturas: [float] = [0 for x in range(n)]

# Estrutura repetitiva
for i in range(0, n):
    # Entrada de dados
    print(f"Dados da {i+1}a pessoa:")
    nome[i] = input("Nome: ")
    idade[i] = int(input("Idade: "))
    alturas[i] = float(input("Altura: "))
    soma += alturas[i]

# Saída de dados
media = soma / n
print(f"\nAltura média: {media:.2f}")

# Estrutura repetitiva
for i in range(0, n):
    # Estrutura condicional
    if idade[i] < 16:
        cont += 1

# Algoritmo matemático
menor = cont * 100 / n

# Saída de dados
print(f"Pessoas com menos de 16 anos: {menor}%\nNome(s):")
for i in range(0, n):
    # Estrutura condicional
    if idade[i] < 16:
        print(f"{nome[i]}")