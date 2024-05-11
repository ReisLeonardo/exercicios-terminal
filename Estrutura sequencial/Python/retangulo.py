# Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor da área, perímetro e diagonal
# deste retângulo, com quatro casas decimais.

# Importando uma biblioteca para facilitar no processo
import math # Biblioteca matemática

# Variáveis
# Em Python não é necessário fazer esse passo...
base: float
altura: float
area: float
perimetro: float
diagonal: float

# Entrada de dados e armazenamento de dados nas variáveis
base = float(input("Base do retângulo: "))
altura = float(input("Altura do retângulo: "))

# Artifícios matemáticos para cálculo da área, perímetro e diagonal.
area = base * altura
perimetro = 2*base + 2*altura
diagonal = math.sqrt(math.pow(base, 2) + math.pow(altura, 2)) # A biblioteca matemática foi usada aqui

# Saída de dados
print(f"A área do retângulo é {area:.4f}, seu perímetro é de {perimetro:.4f} e a sua diagonal é de {diagonal:.4f}")