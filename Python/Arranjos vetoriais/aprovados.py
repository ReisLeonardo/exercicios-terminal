# Entrada de dados
n = int(input("Quantos alunos serão digitados? "))

# Criando vetores
nome: [str] = [0 for i in range(n)]
nota1: [float] = [0 for i in range(n)]
nota2: [float] = [0 for i in range(n)]

# Estrutura repetitiva
for i in range(0, n):
    # Entrada de dados no vetor
    nome[i] = input(f"Digite o nome do {i+1}º aluno(a): ")
    nota1[i] = float(input(f"Digite a primeira nota do {i+1}º aluno(a): "))
    nota2[i] = float(input(f"Digite a segunda nota do {i+1}º aluno(a): "))

# Variável
media = 0
posMedia = 0

# Estrutura repetitiva para verificar a média
for i in range(0, n):
    # Algoritmo matemático
    media = (nota1[i] + nota2[i]) / 2
    posMedia = i
    # Estrutura condicional
    if media >= 6:
        print(f"\n{nome[posMedia]} foi aprovado(a).")