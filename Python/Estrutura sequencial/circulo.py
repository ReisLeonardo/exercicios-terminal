# Fazer um programa para ler o valor "r" do raio de um círculo, e depois mostrar o valor da área do círculo com três casas decimais.
# Você pode usar o valor de pi fornecido pela biblioca, ou então, se preferir, use diretamente o valor 3.14159

# Importando biblioteca matemática
import math

# Variáveis
# Em Python não é necessário fazer esse passo...
r: float
area: float

# Entrada de dados
r = float(input("Digite o valor do raio do círculo: "))

# Artíficio matemático
area = math.pi * r ** 2

# Saída de dados
print(f"A área do círculo de raio {r} é {area:.3f}")