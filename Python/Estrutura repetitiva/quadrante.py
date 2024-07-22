# Entrada de dados
x = int(input("Digite o valor de X: "))
y = int(input("Digite o valor de Y: "))

# Estrutura condicional
if (x != 0 and y != 0):
    # Estrutura repetitiva
    while (x != 0 and y != 0):
        # Estrutura condicional
        if x > 0 and y > 0:
            print("Suas coordendas pertencem ao primeiro quadrante (Q1).")
        elif x < 0 and y > 0:
            print("Suas coordendas pertencem ao segundo quadrante (Q2).")
        elif x < 0 and y < 0:
            print("Suas coordendas pertencem ao terceiro quadrante (Q3).")
        else:
            print("Suas coordendas pertencem ao quarto quadrante (Q4).")
        x = int(input("Digite o valor de X: "))
        y = int(input("Digite o valor de Y: "))

# Saída de dado
print("O programa foi terminado!")