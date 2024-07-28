# Variável
troca = 0
soma = 0

# Entrada de dados
num1 = int(input("Digite um número: "))
num2 = int(input("Digite outro número: "))

# Estrutura condicional
if (num1 > num2):
    troca = num1
    num1 = num2
    num2 = troca

# Estrutura repetitiva
for i in range(num1+1, num2): # Tirei as extremidades
    # Estrutura condicional
    if (i % 2 != 0):
        soma = soma + i

# Saída de dados
print(f"A soma dos ímpares de {num1} e {num2} é {soma}.")