# Faça um programa para calcular o troco no processo de pagamento de um produto de uma mercearia. O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto, e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o valor restante.

# Entrada de dados
unidade = float(input("Qual é o preço unitário do produto? R$"))
quantidade = int(input("Quantas quantidades? "))
recebido = float(input("Quanto o(a) cliente pagou? "))

# Condicional 
total = unidade * quantidade
troco = recebido - total

if troco > 0:
    print(f"O(a) cliente comprou no total R${total}, pagou R${recebido} e portanto o seu troco é de R${troco}.")
else:
    troco = troco * -1 # Artifício que retira o sinal negativo
    print(f"Dinheiro insuficiente. Faltam R${troco}.")