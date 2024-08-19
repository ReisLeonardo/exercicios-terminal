# Entrada de dados
n = int(input("Quantos valores vai ter cada vetor? "))

# Definindo vetores
a: [int] = [0 for x in range(n)]
b: [int] = [0 for x in range(n)]
c: [int] = [0 for x in range(n)]

# Estrutura repetitiva do primeiro vetor
for i in range(0, n):
    a[i] = int(input(f"Digite o {i+1}º valor do vetor A: "))

# Estrutura repetitiva do segundo vetor
for i in range(0, n):
    b[i] = int(input(f"Digite o {i+1}º valor do vetor B: "))

# Saída de dados
print("\nVetor resultante:")
# Estrutura repetitiva com saída de dados
for i in range(0, n):
    c[i] = a[i] + b[i]
    print(f"O resultado de ({a[i]}) + ({b[i]}) = {c[i]}")