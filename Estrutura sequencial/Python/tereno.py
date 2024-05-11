# Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma casa decimal, bem como o valor
# do metro quadrado (m²) do terreno com duas casas decimais. Em seguida, o programa deve mostrar o valor da área do terreno, bem como
# o valor do preço do terreno, ambos com duas casas decimais.

# Variáveis
# Em Python não é necessário fazer esse passo...
largura: float
comprimento: float
metroQuadrado: float
area: float
preco: float

# Entrada de dados e armazenamento de dados nas variáveis
largura = float(input("Digite a largura do terreno: "))
comprimento = float(input("Digite o comprimento do terreno: "))
metroQuadrado = float(input("Digite o valor do metro quadrado: "))

# Artifícios matemáticos para cálculo da área e preço do terreno.
area = largura * comprimento
preco = area * metroQuadrado

# Saída de dados
print(f"A área do terreno é de {area:.2f}m² e o seu preço é de R${preco:.2f}")