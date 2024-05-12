# Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de combustível gasto por este carro
# ao percorrer tal distância. Seu programa deve mostrar o consumo médio do carro, com três casas decimais.

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