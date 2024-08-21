# Entrada de dados
n = int(input("Quantas pessoas serão digitadas? "))

if n > 0:
    # Criando vetores
    altura: [float] = [0.0 for i in range(n)]
    genero: [str] = ['' for i in range(n)]

    # Variáveis
    soma = 0
    menor = float('inf')
    maior = float('-inf')
    contF = 0
    contM = 0

    # Estrutura repetitiva
    for i in range(0, n):
        altura[i] = float(input(f"Altura da {i+1}ª pessoa: "))
        genero[i] = input(f"Gênero da {i+1}ª pessoa (F/M): ")

        # Condicional
        if genero[i] == 'F':
            soma += altura[i]
            contF += 1
        elif genero[i] == 'M':
            contM += 1

    # Estrutura repetitiva para testar os dados
    for i in range(0, n):
        # Mix de condicional para armazenar dados nas variáveis para impressão no final
        if altura[i] > maior:
            maior = altura[i]

        if altura[i] < menor:
            menor = altura[i]

    # Algoritmo matemático
    if contF > 0:
        media = soma / contF
    else:
        media = 0

    # Saída de dados
    print(f"\nMenor altura foi {menor} enquanto a maior foi {maior}, a média da altura das mulheres foi {media:.2f} e o número de homens foi {contM}")
else:
    print("O número de pessoas deve ser maior que zero.")
