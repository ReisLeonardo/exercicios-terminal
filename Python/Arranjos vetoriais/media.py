# Entrada de dados
n = int(input("Quantos elementos vai ter o vetor? "))

# Criação do vetor
vet: [int] = [0 for i in range(n)]

# Variável
soma = 0

# Estrutura repetitiva para ler os dados do vetor
for i in range(0, n):
    vet[i] = float(input("Digite um número: "))
    soma += vet[i]

# Saída dos valores
# Condicional para verificar se existe algum número par
if vet[i] %2 == 0:
    media = soma / n
    print(f"\nA média dos pares é {media:.1f}")
else:
    print("Nenhum número par foi encontrado!")