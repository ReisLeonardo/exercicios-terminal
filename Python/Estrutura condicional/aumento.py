# Entrada de dados
salario = float(input("Digite o salário da pessoa: "))

# Condicional
if salario <= 1000:
    porcentagem = 20/100
    aumento = salario * porcentagem
    novosalario = salario + aumento
    print(f"O novo salário é de R$ {novosalario:.2f}, o aumento foi de R$ {aumento:.2f}, pois foi acrescentado {int(porcentagem*100)}%.")

elif salario <= 3000:
    porcentagem = 15/100
    aumento = salario * porcentagem
    novosalario = salario + aumento
    print(f"O novo salário é de R$ {novosalario:.2f}, o aumento foi de R$ {aumento:.2f}, pois foi acrescentado {int(porcentagem*100)}%.")

elif salario <= 8000:
    porcentagem = 10/100
    aumento = salario * porcentagem
    novosalario = salario + aumento
    print(f"O novo salário é de R$ {novosalario:.2f}, o aumento foi de R$ {aumento:.2f}, pois foi acrescentado {int(porcentagem*100)}%.")

else:
    porcentagem = 5/100
    aumento = salario * porcentagem
    novosalario = salario + aumento
    print(f"O novo salário é de R$ {novosalario:.2f}, o aumento foi de R$ {aumento:.2f}, pois foi acrescentado {int(porcentagem*100)}%.")