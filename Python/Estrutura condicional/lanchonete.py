# Entrada de dados
codigo = int(input("Digite o código do produto: "))
quantidade = int(input("Digite a quantidade: "))

# Condicional
if codigo == 1:
    pagar = 5 * quantidade
    print(f"O valor total a ser pago pelo produto é R$ {pagar:.2f}")

elif codigo == 2:
    pagar = 3.5 * quantidade
    print(f"O valor total a ser pago pelo produto é R$ {pagar:.2f}")

elif codigo == 3:
    pagar = 4.8 * quantidade
    print(f"O valor total a ser pago pelo produto é R$ {pagar:.2f}")

elif codigo == 4:
    pagar = 8.9 * quantidade
    print(f"O valor total a ser pago pelo produto é R$ {pagar:.2f}")

elif codigo == 5:
    pagar = 7.32 * quantidade
    print(f"O valor total a ser pago pelo produto é R$ {pagar:.2f}")

else:
    print("Error!")