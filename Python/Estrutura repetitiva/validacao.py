# Entrada de dados
nota1 = float(input("Digite a primeira nota: "))
# Estrutura repetetitiva
while (nota1 < 0 or nota1 > 10):
    nota1 = float(input("Valor inválido! Tente novamente: "))

# Entrada de dados
nota2 = float(input("Digite a segunda nota: "))
# Estrutura repetitiva
while (nota2 < 0 or nota2 > 10):
    nota2 = float(input("Valor inválido! Tente novamente: "))

# Estrutura condicional 
if (nota1 == 0 and nota2 == 0):
    print("Programa terminado!")
else:
    media = (nota1+nota2) / 2
    print(f"A média entre {nota1} + {nota2} é de {media:.2f}.\n")
    while (nota1 != 0 and nota2 != 0):
        
        # Entrada de dados
        nota1 = float(input("Digite a primeira nota: "))

        # Estrutura repetitiva
        while (nota1 < 0 or nota1 > 10):
            nota1 = float(input("Valor inválido! Tente novamente: "))
        
        # Entrada de dados
        nota2 = float(input("Digite a segunda nota: "))

        # Estrutura repetitiva
        while (nota2 < 0 or nota2 > 10):
            nota2 = float(input("Valor inválido! Tente novamente: "))
        
        # Estrutura condicional
        if (nota1 == 0 and nota2 == 0):
            print("Programa terminado!")
        else:
            media = (nota1 + nota2) / 2
            print(f"A média entre {nota1} + {nota2} é de {media:.2f}.\n")