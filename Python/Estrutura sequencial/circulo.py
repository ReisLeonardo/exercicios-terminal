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