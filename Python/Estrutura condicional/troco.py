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