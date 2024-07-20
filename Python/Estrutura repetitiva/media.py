# Definindo valores p/ utilizar nas estruturas repetitivas
soma = 0
contador = 0

# Entrada de dados
print("Digite as idades:")
idade = int(input())

# Estrutura condicional
if idade < 0:
    print("Impossível calcular uma idade negativa!")

else:
    # Estrutura repetitiva
    while idade >= 0:
            soma = soma + idade
            contador = contador + 1
            idade = int(input())
    
    # Saída de dados
    media = soma / contador
    print(f"A média das idades das {contador} pessoas é de {media:.2f}")