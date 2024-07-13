# Entrada de dados
valor1 = int(input("Digite o primeiro valor: "))
valor2 = int(input("Digite o segundo valor: "))
valor3 = int(input("Digite o terceiro valor: "))

# Condicional
if valor1 < valor2 and valor1 < valor3:
    menor = valor1
    print(f"O menor valor é {menor}")
elif valor2 < valor1 and valor2 < valor3:
    menor = valor2
    print(f"O menor valor é {menor}")
else:
    menor = valor3
    print(f"O menor valor é {menor}")