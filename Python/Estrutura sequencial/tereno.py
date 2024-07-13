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