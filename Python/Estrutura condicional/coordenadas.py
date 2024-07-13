# Entrada de dados
x = float(input("Digite o valor de X: "))
y = float(input("Digite o valor de Y: "))

# Condicional
if x == 0 and y == 0:
    print("Suas coordendas pertencem a ORIGEM.")

elif x > 0 and y == 0:
    print("Suas coordendas pertencem ao eixo X.")

elif y > 0 and x == 0:
    print("Suas coordenadas pertencem ao eixo Y.")

elif x > 0 and y > 0:
    print("Suas coordendas pertencem ao primeiro quadrante (Q1).")

elif x < 0 and y > 0:
    print("Suas coordendas pertencem ao segundo quadrante (Q2).")

elif x < 0 and y < 0:
    print("Suas coordendas pertencem ao terceiro quadrante (Q3).")

else:
    print("Suas coordendas pertencem ao quarto quadrante (Q4).")