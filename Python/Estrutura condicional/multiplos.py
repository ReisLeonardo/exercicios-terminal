# Entrada de dados
x = int(input("Digite o primeiro valor: "))
y = int(input("Digite o segundo valor: "))

# Condicional
if x % 2 == 0 or y % x == 0:
    print("Eles são múltiplos.")

else:
    print("Eles NÃO são múltiplos.")