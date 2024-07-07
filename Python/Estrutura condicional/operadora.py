# Uma operadora de telefonia cobra R$ 50,00 por um plano básico que dá direito a 100 minutos de telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2,00. Faça um programa para ler a quantidade de minutos que uma pessoa consumiu, daí mostre o valor a ser pago.

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