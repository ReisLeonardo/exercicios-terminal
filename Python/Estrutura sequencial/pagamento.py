# Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a quantidade de horas trabalhadas
# por ele(a). Ao final, mostrar o valor do pagamento do funcionário com uma mensagem explicativa.

# Variáveis
# Em Python não é necessário fazer esse passo...
nome: str
valorHora: float; pagamento: float
horasTrabalhadas: int

# Entrada de dados
nome = input("Nome: ")
valorHora = float(input("Valor por hora: "))
horasTrabalhadas = int(input("Horas trabalhadas: "))

# Artíficio matemático
pagamento = valorHora * horasTrabalhadas

# Saída de dados
print(f"O pagamento para {nome} deve ser {pagamento}")