# Entrada de dados
nota1 = float(input("Digite a primeira nota: "))
nota2 = float(input("Digite a segunda nota: "))

# Algoritmo matemático
soma = nota1 + nota2

# Condicional
if soma < 60:
    print(f"A sua nota final foi de {soma}, você foi reprovado(a).")
else:
    print(f"A sua nota foi final de {soma}.")