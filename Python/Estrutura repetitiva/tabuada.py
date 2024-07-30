# Entrada de dados
n = int(input("Deseja a tabuada para qual valor? "))

# Estrutura repetitiva
for i in range(0, 10):
    tabuada = n * (i+1)
    print(f"{n} x {i+1} = {tabuada}")