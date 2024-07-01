# Faça um programa para ler uma duração de tempo em segundos, daí imprima na tela esta duração no formato horas:minutos:segundos.

# Variáveis
# Em Python não é necessário fazer esse passo...
duracao: int; hora: int; resto: int; minuto: int; segundo: int;

# Entrada de dados pelo usuário
duracao = int(input("Digite a duração em segundos: "))

# Algoritmo matemática para calcular o resultado
hora = duracao // 3600 # Estamos guardando o valor da divisão inteira
resto = duracao % 3600 # Estamos guardando o valor do resto da divisão, isso será usado para calcular os minutos
minuto = resto // 60 # Estamos guardando o valor dos minutos
segundo = resto % 60 # Estamos guardando o valor dos segundos

# Saída de dados
print(f"{hora}:{minuto}:{segundo}")