# Entrada de dados
distancia1 = float(input("Digite a primeira distância: "))
distancia2 = float(input("Digite a segunda distância: "))
distancia3 = float(input("Digite a terceira distância: "))

# Condicional
if distancia1 > distancia2 and distancia1 > distancia3:
    maior = distancia1

elif distancia2 > distancia1 and distancia2 > distancia3:
    maior = distancia2

else:
    maior = distancia3

print(f"A maior das três distâncias foi {maior}.")