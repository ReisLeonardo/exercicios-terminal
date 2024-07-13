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