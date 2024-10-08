# Biblioteca
import math

# Entrada de dados
a = float(input("Digite o coeficiente A: "))
b = float(input("Digite o coeficiente B: "))
c = float(input("Digite o coeficiente C: "))

# Algoritmo matemático
delta = math.pow(b, 2) - 4 * a * c

# Condicional
if delta < 0 or a == 0:
    print("Esta equação não possui raízes reais.")
else:
    x1 = (- b + math.sqrt(delta)) / (2 * a) # Precisa estar aqui em baixo, se não vai dar erro...
    x2 = (- b - math.sqrt(delta)) / (2 * a)
    print(f"O x1 é {x1:.4f} e o x2 é {x2:.4f}.")