# Entrada de dados
n = int(input("Quantos números você vai digitar? "))

# Vetores
vet: [int] = [0 for x in range(n)]

# Estrutura repetitiva
for i in range(0, n):
    # Leitura do vetor na posição que ele está percorrendo
     vet[i] = int((input("Digite um número: ")))

# Saída de dados
print("Números negativos: ")
# Estrutura repetitiva
for i in range(0, n):
    # Estrutura condicional
    if vet[i] < 0:
         print(vet[i], " ")