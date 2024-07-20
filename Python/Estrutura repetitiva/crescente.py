# Entrada de dados
print("Digite dois números:")
x = int(input())
y = int(input())

# Estrutura repetitiva
while x != y:
    if x > y:
        print(f"Decrescente, afinal {x} é maior que {y}.")
    else:
        print(f"Crescente, afinal {x} é menor que {y}.")
    print("Digite dois números:")
    x = int(input())
    y = int(input())