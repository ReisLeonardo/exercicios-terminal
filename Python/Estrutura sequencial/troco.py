# Variáveis
# Em Python não é necessário fazer esse passo...
precoUnitario: float; precoTotal: float; dinheiroRecebido: float; troco: float
quantidade: int

# Entrada de dados e armazenamento de dados nas variáveis
precoUnitario = float(input("Preço unitário do produto: "))
quantidade = int(input("Quantidade comprada: "))
dinheiroRecebido = float(input("Dinheiro recebido: "))

# Artíficio matemático para calcular o troco
precoTotal = precoUnitario * quantidade
troco = dinheiroRecebido - precoTotal

# Saída de dados
print(f"O troco que o cliente deve receber é de R${troco}")