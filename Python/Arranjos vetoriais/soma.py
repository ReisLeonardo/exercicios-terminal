# Variável
soma = 0
media = 0

# Entrada de dados
n = int(input("Quantos números você vai digitar? "))

# Vetor
vet: [float] = [0 for x in range(n)]

# Estrutura repetitiva
for i in range(0, n):
    vet[i] = float(input("Digite um número: "))

# Saída de dados
print("\nValores:", end=" ") # Usando end evita que ele vá para linha debaixo, é automático no Python.

# Estrutura repetitiva
for i in range(0, n):
    print(f"{vet[i]:.1f}", end="  ")

# Saída de dados
print(f"\nSoma: ", end="")
# Estrutura repetitiva
for i in range(0, n):
    soma += vet[i]
# Saída de dados
print(f"{soma:.2f}")

# Saída de dados
media = soma / n
print(f"Média: {media:.2f}")