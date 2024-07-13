# Entrada de dados
escala = input("Escolha uma escala (C/F): ")

# Condicional
if escala == 'F' or escala == 'f':
    fahrenheit = float(input("Digite a temperatura em Fahrenheit: "))
    celsiustof = (5 / 9) * (fahrenheit - 32)
    print(f"A temperatura equivale a {celsiustof:.2f} ºF.")

elif escala == 'C' or escala == 'c':
    celsius = float(input("Digite a temperatura em Celsius: "))
    fahrenheittoc = celsius * 1.8 + 32
    print(f"A temperatura equivale a {fahrenheittoc:.2f} ºC.")

else:
    print("Escala inválida!")