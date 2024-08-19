# Entrada de dados
n = int(input("Quantos números você vai digitar? "))

# Criando vetor
vet: [float] = [0 for x in range(n)]

# Estrutura repetitiva
for i in range(0, n):
    # Entrada de dados
    vet[i] = float(input("Digite um número: "))

# Considerando que o primeiro valor é o maior
maior = vet[0]

# Criando uma variável para mostrar a posição
posMaior = 0

# Teste repetitivo para atualizar a variável maior
for i in range(0, n):
   # Estrutura condicional
   if vet[i] > maior:
      maior = vet[i]
      posMaior = i

# Saída de dados
print(f"O maior valor é {maior} e ele está na posição {posMaior}")