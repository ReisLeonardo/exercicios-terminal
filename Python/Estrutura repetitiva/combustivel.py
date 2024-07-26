# Variáveis
alcool = 0
gasolina = 0
diesel = 0

# Entrada de dados
codigo = int(input("Informe um código (1. Álcool, 2. Gasolina, 3. Diesel) ou 4 para parar: "))

# Estrutura repetitiva
while (codigo != 4):
    # Estrutura condicional
    if (codigo == 1):
        alcool = alcool + 1
    elif (codigo == 2):
        gasolina = gasolina + 1
    elif (codigo == 3):
        diesel = diesel + 1
    
    # Entrada de dados da estrutura repetitiva
    codigo = int(input("Informe um código (1. Álcool, 2. Gasolina, 3. Diesel) ou 4 para parar: "))

# Saída de dados
print("Muito obrigado!\n")
print(f"Álcool: {alcool}\nGasolina: {gasolina}\nDiesel: {diesel}")