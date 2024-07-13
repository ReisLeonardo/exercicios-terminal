# Entrada de dados
minutos = int(input("Digite a quantidade de minutos: "))

# Condicional
if minutos < 100:
    pagar = 50
    print(f"O(a) cliente deve pagar R$ {pagar} por ter consumido {minutos} minuto(s).")
else:
    gasto = 2 * (minutos - 100)
    pagar = 50 + gasto
    print(f"O(a) cliente deve pagar R$ {pagar} por ter consumido {minutos} minuto(s).")