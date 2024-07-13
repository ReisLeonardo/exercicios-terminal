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