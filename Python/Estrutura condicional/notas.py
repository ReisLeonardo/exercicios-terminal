# Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de uma disciplina anual. Em seguida, mostrar a nota final que
## o aluno obteve (com uma casa decimal) no ano juntamente com um texto aplicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a mensagem
## "REPROVADO".

# Entrada de dados
nota1 = float(input("Digite a primeira nota: "))
nota2 = float(input("Digite a segunda nota: "))

# Algoritmo matemático
soma = nota1 + nota2

# Condicional
if soma < 60:
    print(f"A sua nota final foi de {soma}, você foi reprovado(a).")
else:
    print(f"A sua nota foi final de {soma}.")