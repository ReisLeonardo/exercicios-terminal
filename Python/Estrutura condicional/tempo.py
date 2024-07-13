# Entrada de dados
horaInicial = int(input("Digite a hora inicial: "))
horaFinal = int(input("Digite a hora final: "))

# Algoritmo matemático
hora = (24 - horaInicial) + horaFinal

# Condicional
if horaInicial == 0 and horaFinal == 0:
    print("O jogo durou 24 horas.")

elif hora > 24:
    hora = hora - 24
    print(f"O jogo durou {hora} hora(s).")

else:
    print(f"O jogo durou {hora} hora(s).")