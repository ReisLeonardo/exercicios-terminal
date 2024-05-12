# Fazer um programa para ler três medidas A, B, C. Em seguida, calcular e mostrar (imprimir os dados com quatro casas decimais):
# A) a área do quadrado que tem lado A (A²)
# B) a área do triângulo retângulo que tem base A e altura B
# C) a área do trapézio que tem bases A e B, e altura C

# Variáveis
# Em Python não é necessário fazer esse passo...
a: float; b: float; c: float; areaQuadrado: float; areaTriangulo: float; areaTrapezio: float

# Entrada de dados
a = float(input("Digite a medida A: "))
b = float(input("Digite a medida B: "))
c = float(input("Digite a medida C: "))

# Artíficio matemático
areaQuadrado = a ** 2
areaTriangulo = (a*b)/2
areaTrapezio = (a+b)*c/2

# Saída de dados
print(f"Área do quadrado {areaQuadrado:.4f}, triângulo {areaTriangulo:.4f} e do trapézio {areaTrapezio:.4f}")