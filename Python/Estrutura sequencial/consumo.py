# Variáveis
# Em Python não é necessário fazer esse passo...
distanciaPercorrida: int
combustivelGasto: float; consumoMedio: float

# Entrada de dados
distanciaPercorrida = int(input("Distância percorrida: "))
combustivelGasto = float(input("Combustível gasto: "))

# Artíficio matemático
consumoMedio = distanciaPercorrida / combustivelGasto

# Saída de dados
print(f"O consumo médio é de {consumoMedio:.3f}")