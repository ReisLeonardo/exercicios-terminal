# Variável
cont = 0

# Entrada de dados
n = int(input("Quantos números você vai digitar? "))

# Vetor
vet: [int] = [0 for x in range(n)]

# Estrutura repetitiva
for i in range(0, n):
    # Leitura do vetor na posição i
    vet[i] = int(input("Digite um número: "))

# Saída de dados
print("Números pares: ", end=" ")
# Estrutura repetitiva para saída de dados
for i in range(0, n):
    # Estrutura condicional para imprimir os valores pares
    if vet[i] % 2 == 0:
        print(vet[i]," ", end="")
        cont += 1

# Saída de dados
print(f"\nQuantidade de números pares: {cont}")