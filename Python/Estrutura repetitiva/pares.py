# Variáveis
soma = 0

# Entrada de dados
numero = int(input("Digite um número inteiro: "))

# Estrutura repetitiva
while (numero != 0):
    # Estrutura condicional
    if (numero % 2 != 0):
        numero = numero + 1
    
    # Algoritmo matemático
    soma = 5 * numero + 20 # É igual a número + número + 2 + número + 4 + número + 6 + número + 8
        
    # Saída de dados da estrutura repetitiva
    print(f"A soma consecutiva dos 5 pares consecutivos é {soma}.")

    # Entrada de dados da estrutura repetitiva
    numero = int(input("Digite um número inteiro: "))