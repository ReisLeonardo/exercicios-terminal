# Entrada de dados
glicose = float(input("Digite a medida da glicose: "))

# Condicional
if glicose <= 100:
    classificacao = "normal"

elif glicose > 100 and glicose <= 140:
    classificacao = "elevado"

else:
    classificacao = "diabético(a)"

print(f"Sua glicose foi classificada como {classificacao}.")