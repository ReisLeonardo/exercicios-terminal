# Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os nomes e a idade média entre essas
# pessoas, com uma casa decimal.

# Variáveis
# Em Python não é necessário fazer esse passo...
nome1: str; nome2: str
idade1: int; idade2: int
idademedia: float

# Entrada de dados e armazenamento de dados nas variáveis
print("Dados da primeira pessoa:")
nome1 = input("Nome: ")
idade1 = int(input("Idade: "))
print("Dados da segunda pessoa:")
nome2 = input("Nome: ")
idade2 = int(input("Idade: "))

# Artifícios matemáticos para calcular idade média.
idademedia = (idade1+idade2)/2

# Saída de dados
print(f"A idade média de {nome1} e {nome2} é de {idademedia} anos de idade.")