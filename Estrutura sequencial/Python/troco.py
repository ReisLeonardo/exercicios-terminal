# Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia. O programa deve ler o preço 
# unitário do produto, a quantidade de unidades compradas deste produto, e o valor em dinheiro dado pelo cliente (suponha que
# haja dinheiro suficiente para o troco). Seu programa deve mostrar o valor do troco a ser devolvido ao cliente.

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