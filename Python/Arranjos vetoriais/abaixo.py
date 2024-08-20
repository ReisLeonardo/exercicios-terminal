# Entrada de dados
n = int(input("Quantos elementos vai ter o vetor? "))

# Criação do vetor
vet: [float] = [0 for i in range(n)]

# Variável
soma = 0

# Estrutura repetitiva para ler os dados do vetor
for i in range(0, n):
    vet[i] = float(input("Digite um número: "))
    soma += vet[i]

# Saída dos valores
media = soma / n
print(f"A média dos vetores é {media:.3f}\nElementos abaixo da média: ", end="")

# Repetitiva para verificar
for i in range(0, n):
    # Condicional
    if vet[i] < media:
        print(vet[i], "  ", end="")