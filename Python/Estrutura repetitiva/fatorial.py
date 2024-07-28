# Variável
fat = 1

# Entrada de dado
n = int(input("Digite um valor entre 0 a 15: "))

# Estrutura repetitiva
for i in range(n, 0, -1): # É necessário colocar o -1 para ele fazer a conta de trás para frente!
    fat = fat * i

# Saída de dados
print(f"O fatorial de {n}! = {fat}")