# Exercícios comentados nas linguagens C, C++, Java, C# e Python
Tente executar os exercícios abaixo sem olhar a resolução deles na pasta de cada linguagem de programação. Lembre-se de que todos os exercícios devem ter um resultado no terminal, ou seja, não devem criar aplicativos ou janelas clicáveis com vários recursos. O objetivo destes exercícios é entender a lógica de cada linguagem.

>[!TIP]
> A escolha da IDE (Ambiente de Desenvolvimento Integrado) correta é crucial para turbinar sua produtividade e impulsionar seus projetos de programação. Cada linguagem possui ferramentas específicas que facilitam a escrita, depuração e execução do código, otimizando seu workflow e te aproximando do sucesso.
> - C e C++ - [CodeBlocks](https://www.codeblocks.org/downloads/)
> - C# - [Visual Studio](https://visualstudio.microsoft.com/pt-br/downloads/)
> - Java - [Eclipse](https://eclipseide.org/)
> - Python - [Pycharm](https://www.jetbrains.com/pt-br/pycharm/download/) ou [Visual Studio Code](https://code.visualstudio.com/download)

>[!WARNING]
> Evite utilizar acentos gráficos ou caracteres especiais com a linguagem C e C++, pois precisam de manipulação de codificação de caracteres para suportar acentos gráficos, C#, Java e Python oferecem suporte nativo para Unicode, facilitando a inclusão de caracteres especiais diretamente no código.

## Estrutura sequencial
A estrutura sequencial é um dos fundamentos básicos da programação, essencial para a execução de tarefas de maneira sequencial e linear. Nesse tipo de estrutura, as instruções são executadas uma após a outra, na ordem em que são escritas no código. Isso significa que cada instrução é processada em sequência, sem desvios ou condições que alterem o fluxo natural do programa.

Em termos práticos, na estrutura sequencial, cada linha de código é executada do início ao fim, sem saltos ou desvios condicionais. Isso é ideal para operações simples e diretas, como cálculos matemáticos, atribuições de variáveis, entrada e saída de dados, entre outros procedimentos que não requerem decisões baseadas em condições.

## Exercícios
### 1. Terreno (🏠)

**Situação-problema:** Calcule a área e o preço de um terreno.

Leia as medidas de largura e comprimento de um terreno retangular com uma casa decimal, bem como o valor do metro quadrado (m²) do terreno com duas casas decimais. Em seguida, o algoritmo deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com duas casas decimais.

Variável | Tipo | Fórmula
--- | --- | ---
largura | decimal (flutuante) | Área = largura x comprimento
comprimento | decimal (flutuante) | Preço = área x metro quadrado
metroquadrado | decimal (flutuante)
area | decimal (flutuante)
preço | decimal (flutuante)

Assista [aqui](https://www.youtube.com/watch?v=aNSAyK0rMiw) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20sequencial/terreno.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20sequencial/terreno.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20sequencial/terreno.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20sequencial/terreno.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20sequencial/tereno.py).

### 2. Retângulo (🍞)

**Situação-problema:** Mostre o valor da área, perímetro e diagonal comm quatro casas decimais.

Leia as medidas da base e altura de um retângulo. Em seguida, mostre o valor da área, perímetro e diagonal deste retângulo, com quatro casas decimais.

Variável | Tipo | Fórmula
--- | --- | ---
base | decimal (flutuante) | Área = base x altura
altura | decimal (flutuante) | Perímetro = 2*(base+altura)
area | decimal (flutuante) | Diagonal = raíz de base²+altura²
perimetro | decimal (flutuante)
diagonal | decimal (flutuante)

Assista [aqui](https://www.youtube.com/watch?v=aNSAyK0rMiw) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20sequencial/retangulo.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20sequencial/retangulo.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20sequencial/retangulo.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20sequencial/retangulo.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20sequencial/retangulo.py).

### 3. Idades (🧑‍🤝‍🧑)

**Situação-problema:** Leia o nome e idade de duas pessoas. Ao final mostre uma mensagem com os nomes e a idade média entre essas duas pessoas, com uma casa decimal.

Variável | Tipo | Fórmula
--- | --- | ---
nome1 | caractere | Média das idade = (idade1 + idade2) / 2
nome2 | caractere | 
idade1 | inteiro
idade2 | inteiro
mediaidade | decimal (flutuante)

Assista [aqui](https://www.youtube.com/watch?v=aNSAyK0rMiw) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20sequencial/idades.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20sequencial/idades.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20sequencial/idades.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20sequencial/idades.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20sequencial/idades.py).


### 4. Soma (🧮)

**Situação-problema:** Some dois valores inteiros (x + y).

Leia dois valores inteiros e depois mostre na tela o valor da soma destes números.

Variável | Tipo | Fórmula
--- | --- | ---
x | inteiro | Soma = x + y
y | inteiro | 
soma | inteiro

Assista [aqui](https://www.youtube.com/watch?v=aNSAyK0rMiw) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20sequencial/soma.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20sequencial/soma.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20sequencial/soma.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20sequencial/soma.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20sequencial/soma.py).

### 5. Troco (💰)

**Situação-problema:** Mostre o valor do troco a ser devolvido ao cliente.

Leia o preço unitário do produto, a quantidade de unidades compradas deste produto, o valor em dinheiro dado pelo cliente e mostre o valor do troco a ser devolvido ao cliente. (suponha que haja dinheiro suficiente). 

Variável | Tipo | Fórmula
--- | --- | ---
precoUnitario | decimal (flutuante) | Preço total = preço unitário x quantidade
precoTotal | decimal (flutuante) | Troco = dinheiro recebido - preço total
dinheiroRecebido | decimal (flutuante)
troco | decimal (flutuante)
quantidade | inteiro

Assista [aqui](https://www.youtube.com/watch?v=aNSAyK0rMiw) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20sequencial/troco.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20sequencial/troco.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20sequencial/troco.cs), [Java]([#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20sequencial/troco.java)) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20sequencial/troco.py).

### 6. Círculo (🔴)

**Situação-problema:** Mostre a área do círculo com base no seu raio.

Leia o valor do raio de um círculo, e depois mostre o valor da área do círculo com três casas decimais.

Variável | Tipo | Fórmula
--- | --- | ---
raio | decimal (flutuante) | Área = π x r²
area | decimal (flutuante)

Assista [aqui](https://www.youtube.com/watch?v=aNSAyK0rMiw) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20sequencial/c%C3%ADrculo.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20sequencial/circulo.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20sequencial/circulo.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20sequencial/circulo.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20sequencial/circulo.py).

### 7. Pagamento (💳)

**Situação-problema:** Mostre o pagamento que um(a) funcionário(a) deve receber.

Leia o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a quantidade de horas trabalhadas por ele(a). Depois mostre na tela com duas casas decimais.

Variável | Tipo | Fórmula
--- | --- | ---
nome | caractere | Pagamento = valor da hora x hora(s) trabalhada(s)
valorHora | decimal (flutuante)
pagamento | decimal (flutuante)
horaTrabalhada | decimal (flutuante)

Assista [aqui](https://www.youtube.com/watch?v=aNSAyK0rMiw) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20sequencial/pagamento.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20sequencial/pagamento.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20sequencial/pagamento.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20sequencial/pagamento.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20sequencial/pagamento.py).

### 8. Consumo (🚙)

**Situação-problema:** Mostre o consumo médio de um veículo.

Leia a distância total (em km) percorrida por um veículo, bem como o total de combustível gasto por este veículo ao percorrer tal distância. Mostre o consumo médio do veículo, com três casas decimais.

Variável | Tipo | Fórmula
--- | --- | ---
distanciaPercorrida | inteiro | Consumo médio = distância percorrida / combustível gasto
combustivelGasto | decimal (flutuante)
consumoMedio | decimal (flutuante)

Assista [aqui](https://www.youtube.com/watch?v=aNSAyK0rMiw) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20sequencial/consumo.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20sequencial/consumo.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20sequencial/consumo.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20sequencial/consumo.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20sequencial/consumo.py).

### 9. Medidas (📐)

**Situação=problema:** Mostre o resultado da área do quadrado, triângulo e trapézio das medidas A, B e C.

Leia três medidas A, B, C. Em seguida, calcule e mostre com quatro casas decimais a área do quadrado que tem lado A, a área do triângulo retângulo que tem base A e altura B, e a área do trapézio que tem bases A e B, e altura C.

Variável | Tipo | Fórmula
--- | --- | ---
a | decimal (flutuante) | Área do quadrado = a²
b | decimal (flutuante) | Área do triângulo = (a x b) / 2
c | decimal (flutuante) | Área do trapézio (a + b) * c / 2
areaQuadrado | decimal (flutuante)
areaTriangulo | decimal (flutuante)
areaTrapezio | decimal (flutuante)

Assista [aqui](https://www.youtube.com/watch?v=aNSAyK0rMiw) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20sequencial/medidas.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20sequencial/medidas.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20sequencial/medidas.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20sequencial/medidas.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20sequencial/medidas.py).

### 10. Duração (⏰)

**Situação-problema:** Imprima a relação hora:minuto:segundos de x segundos.

Faça um programa para ler uma duração de tempo em segundos, daí imprima na tela esta duração no formato horas:minutos:segundos.

Variável | Tipo | Fórmula
--- | --- | ---
duracao | inteiro | Hora = duração / 3600
hora | inteiro | Resto = duração % 3600 (resto da divisão)
resto | inteiro | Minuto = resto / 60
minuto | inteiro | Segundo = resto % 60 (resto da divisão)
segundo | inteiro

Assista [aqui](https://www.youtube.com/watch?v=aNSAyK0rMiw) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20sequencial/duracao.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20sequencial/duracao.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20sequencial/duracao.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20sequencial/duracao.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20sequencial/duracao.py).

## Estrutura condicional 
A estrutura condicional é um conceito fundamental na programação, permitindo que um programa tome decisões com base em condições específicas. Essas estruturas são essenciais para controlar o fluxo de execução do programa de acordo com diferentes situações encontradas durante a sua execução.

## Exercícios
### 1. Notas (🧑‍🎓)

**Situação-problema:** Leia duas notas e mostre o resultado de aprovado ou reprovado.

Faça um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de uma disciplina anual. Em seguida, mostre a nota final que o aluno obteve (com uma casa decimal) no ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a mensagem "REPROVADO".

Variável | Tipo | Fórmula
--- | --- | ---
nota1 | decimal (flutuante) | soma = nota1 + nota2
nota2 | decimal (flutuante)
soma | decimal (flutuante)

Assista [aqui](https://youtu.be/BAxtPUnU3sw?si=J1zv5nuFj2yn5zt-) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/notas.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/notas.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/notas.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/notas.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/notas.py).

### 2. Baskara (🧮)

**Situação-problema:** Leia três coeficientes e calcule a fórmula de baskara.

Faça um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula de Baskara, calcule e mostre os valores das raízes x1 e x2 da equação com quatro casas decimais. Se a equação não possuir raízes reais, mostre uma mensagem.

Variável | Tipo | Fórmula
--- | --- | ---
a | decimal (flutuante) | delta = b² - 4 x a x c
b | decimal (flutuante) | x = -b + raiz de delta / 2 x a
c | decimal (flutuante) | x2 = -b - raiz de delta / 2 x a
x1 | decimal (flutuante)
x2 | decimal (flutuante)

**Condições para ter raízes:**
* Delta não pode ser negativo.
* Coeficiente "a" não pode ser zero.

Assista [aqui](https://youtu.be/BAxtPUnU3sw?si=J1zv5nuFj2yn5zt-) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/baskara.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/baskara.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/baskara.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/baskara.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/baskara.py).

### 3. Menor de três (3️⃣)

**Situação-problema:** Mostre o menor dos números digitados

Faça um programa para ler três números inteiros. Em seguida, mostre qual o menor dentre os três números lidos. Em caso de empate, mostre apenas uma vez.

Variável | Tipo
--- | --- 
valor1 | inteiro
valor2 | inteiro
valor3 | inteiro
menor | inteiro

Assista [aqui](https://youtu.be/BAxtPUnU3sw?si=J1zv5nuFj2yn5zt-) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/menor.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/menor.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/menor.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/menor.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/menor.py).

### 4. Operadora (🌐)

**Situação-problema:** Informe ao consumidor quanto ele(a) deve pagar pelos minutos consumidos.

Uma operadora de telefonia cobra R$ 50,00 por um plano básico que dá direito a 100 minutos de telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2,00. Faça um programa para ler a quantidade de minutos que uma pessoa consumiu, daí mostre o valor a ser pago.

Variável | Tipo | Fórmula
--- | --- | ---
minutos | inteiro | gasto = 2 * (minutos - 100)
pagar | inteiro
gasto | inteiro

Assista [aqui](https://youtu.be/BAxtPUnU3sw?si=J1zv5nuFj2yn5zt-) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/operadora.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/operadora.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/operadora.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/operadora.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/operadora.py).

### 5. Troco verificado (💰)

**Situação-problema:** Informe quanto o(a) cliente deve receber de troco, e se não dinheiro recebido não for suficiente informe quanto precisa para quitar a compra.

Faça um programa para calcular o troco no processo de pagamento de um produto de uma mercearia. O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto, e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o valor restante.

Variável | Tipo | Fórmula
--- | --- | ---
unidade | decimal (flutuante) | total = unidade x quantidade
quantidade | inteiro | troco = recebido - total
recebido | decimal (flutuante)

Assista [aqui](https://youtu.be/BAxtPUnU3sw?si=J1zv5nuFj2yn5zt-) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/troco.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/troco.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/troco.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/troco.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/troco.py).

### 6. Glicose (🩸)

**Situação-problema:** Leia a glicose e informe o seu nível de acordo com os dados de uma tabela.

Faça um programa que leia a quantidade de glicose no sangue de uma pessoa e depois mostre na tela a classificação desta glicose de acordo com os dados.

Classificação | Glicose
--- | ---
Normal | Até 100 mg/dl
Elevado | Maior que 100 até 140 mg/dl
Diabetes | Maior que 140 mg/dl

Variável | Tipo
--- | ---
glicose | decimal (flutuante)
classificacao | caractere

Assista [aqui](https://youtu.be/BAxtPUnU3sw?si=J1zv5nuFj2yn5zt-) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/glicose.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/glicose.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/glicose.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/glicose.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/glicose.py).

### 7. Dardo (🎯)

**Situação-problema:**  Diga qual foi o dardo que percorreu a maior distância em um lançamento.

No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir. Crie um programa para, dadas as medidas das três tentativas de lançamento, informar qual foi a maior.

Variável | Tipo
--- | ---
distancia1 | decimal (flutuante)
distancia2 | decimal (flutuante)
distancia3 | decimal (flutuante)
maior | decimal (flutuante)

Assista [aqui](https://youtu.be/BAxtPUnU3sw?si=J1zv5nuFj2yn5zt-) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/dardo.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/dardo.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/dardo.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/dardo.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/dardo.py).

### 8. Temperatura (🥶)

**Situação-problema:** Converta as temperaturas de celsius para fahrenheit ou vice-versa.

Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa. Para isso, construa um programa para ler a letra "C" ou "F" indicando em qual escala vai ser informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com duas casas decimais.

Variável | Tipo | Fórmula
--- | --- | ---
Escala | caractere simples | Celsius para Fahrenheit = (celsius) * 1,8 + 32
Celsius | decimal (flutuante) | Fahrenheit para Celsius = (5 / 9) * (fahrenheit - 32)
celsiustof | decimal (flutuante)
fahrenheit | decimal (flutuante)
fahrenheittoc | decimal (flutuante)

Assista [aqui](https://youtu.be/BAxtPUnU3sw?si=J1zv5nuFj2yn5zt-) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/temperatura.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/temperatura.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/temperatura.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/temperatura.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/temperatura.py).

### 9. Lanchonete (🍔)

**Situação-problema:** Informe ao cliente quanto ele(a) deve pagar pelos items do menu de uma lanchonete.

Uma lanchonete possui vários produtos. Cada produto possui um código e um preço. Faça um programa para ler o código e a quantidade comprada de um produto (suponha um código válido), e daí informe qual o valor a ser pago, com duas casas decimais.

Código do produto | Preço do produto
--- | ---
1 | R$ 5
2 | R$ 3,50
3 | 4,80
4 | R$ 8,90
5 | R$ 7,32

Variável | Tipo
--- | ---
codigo | inteiro
pagar | decimal (flutuante)
quantidade | inteiro

Assista [aqui](https://youtu.be/BAxtPUnU3sw?si=J1zv5nuFj2yn5zt-) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/lanchonete.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/lanchonete.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/lanchonete.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/lanchonete.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/lanchonete.py).

### 10. Múltiplos (✖️)

**Situação-problema:** Informe se os números digitados são multíplos

Faça um programa para ler dois números inteiros, e dizer se um número é múltiplo do outro. Os números podem ser digitados em qualquer ordem.

Variável | Tipo | Fórmula
--- | --- | ---
x | inteiro | Se o resto da divisão for 0 é múltiplo
y | inteiro | Se o resto da divisão for 0 não é múltiplo

Assista [aqui](https://youtu.be/BAxtPUnU3sw?si=J1zv5nuFj2yn5zt-) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/multiplos.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/multiplos.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/multiplos.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/multiplos.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/multiplos.py).

### 11. Aumento (🤑)

**Situação-problema:** Mostre quanto o(a) funcionário(a) recebeu de aumento.

Uma empresa vai conceder um aumento percentual de salário aos seus funcionários dependendo de quanto cada pessoa ganha, conforme a tabela abaixo. Faça um programa ler o salário de uma pessoa e mostrar o novo salário desta pessoa depois do aumento, quanto foi o aumento e qual foi a porcentagem.

Salário atual | Aumento
--- | ---
Até R$1.000 | 20%
Mais de R$1.000 e até R$3.000 | 15%
Mais de R$3.000 e até R$8.000 | 10%
Acima de R$8.000 | 5%

Variável | Tipo | Fórmula
--- | --- | ---
salario | decimal (flutuante) | aumento = salario * porcentagem
porcentagem | inteiro ou decimal | novo salário = salario + aumento
aumento | decimal (flutuante)
novosalario | decimal (flutuante)

Assista [aqui](https://youtu.be/BAxtPUnU3sw?si=J1zv5nuFj2yn5zt-) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/aumento.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/aumento.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/aumento.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/aumento.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/aumento.py).

### 12. Tempo de jogo (🎮)

**Situação-problema:**

Leia a hora inicial e a final de um jogo. E em seguida, calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.

Variável | Tipo | Fórmula
--- | --- | ---
horaInicial | inteiro | Se menor que 24, hora = (24 - horainicial) + horaFinal
horaFinal | inteiro | Se maior que 24, hora = hora - 24
hora | inteiro

Assista [aqui](https://youtu.be/BAxtPUnU3sw?si=J1zv5nuFj2yn5zt-) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/tempo.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/tempo.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/tempo.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/tempo.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/tempo.py).

### 13. Coordenadas (🔲)

**Situação-problema:** Informe em qual quadrante está localizado as coordendas, sabendo que (Q1 = x e y positivo, Q2 = x negativo e y positivo, Q3 = x e y negativo, Q4 = y negativo e x positivo.

Leia os valores das coordenadas X e Y de um ponto no plano cartesiano. A seguir, determine qual o quadrante pertence o ponto (Q1, Q2, Q3 ou Q4). Se o ponto estiver na origem, escreva a mensagem "origem". Se o ponto estiver sobre um dos eixos escreva "Eixo X" ou "Eixo Y".

Variável | Tipo 
--- | ---
x | decimal (flutuante)
y | decimal (flutuante)

Assista [aqui](https://youtu.be/BAxtPUnU3sw?si=J1zv5nuFj2yn5zt-) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/coordenadas.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/coordenadas.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/coordenadas.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/coordenadas.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/coordenadas.py).

## Estrutura repetitiva - while 
A estrutura repetitiva, também conhecida como estrutura de repetição ou estrutura de loop, é utilizada na programação para executar um bloco de código repetidamente enquanto uma condição específica for verdadeira, ou por um número pré-determinado de vezes. Essa capacidade é fundamental para automatizar tarefas que precisam ser executadas várias vezes sem a necessidade de repetir o mesmo código manualmente.

### Exercícios

### 1. Crescente (📈)

**Situação-problema:** Faça um programa que leia dois números inteiros diferentes e diga se está na ordem crescente ou decrescente, se for digitado o mesmo número finalize o programa.

Leia dois inteiros X e Y. Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O programa deve finalizar quando forem digitados dois valores iguais.

Variável | Tipo 
--- | ---
x | inteiro
y | inteiro

Assista [aqui](https://youtu.be/5xLTeIc7KE8) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20repetitiva/crescente.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20repetitiva/crescente.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20repetitiva/crescente.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20repetitiva/crescente.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20repetitiva/crescente.py).

### 2. Média idades (🧑‍🤝‍🧑)

**Situação-problema:** Leia diversas idades e mostre a média no final, se o resultado inicial for negativo não calcule.

Leia um número indeterminado de dados, contendo cada um, a idade de um indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcule e imprima a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez, mostre a mensagem "impossível calcular".

Variável | Tipo 
--- | ---
soma | inteiro
contador | inteiro
idade | inteiro
media | decimal (flutuante)

Assista [aqui](https://youtu.be/5xLTeIc7KE8) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20repetitiva/media.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20repetitiva/media.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20repetitiva/media.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20repetitiva/media.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20repetitiva/media.py).

### 3. Senha fixa (💻)

**Situação-problema:** Leia as tentativas de acesso de senha e conceda o acesso apenas quando for a senha correta. Senha: 2024.

Repita a leitura de uma senha até que ela seja válida. Para cada leitura de senha incorreta informada, escreva a mensagem "Senha inválida! Tente novamente: ". Quando a senha for informada corretamente deve ser impressa a mensagem "Acesso permitido" e o algoritmo encerrado. Considere que a senha correta é o valor 2024.

Variável | Tipo 
--- | ---
senha | inteiro

Assista [aqui](https://youtu.be/5xLTeIc7KE8) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20repetitiva/senha.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20repetitiva/senha.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20repetitiva/senha.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20repetitiva/senha.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20repetitiva/senha.py).

### 4. Quadrante (🔲)

**Situação-problema:** Leia X e Y e diga o quadrante no sistema cartesiano. O algoritmo encerra quando é digitado uma posição especifíca do eixo ou quando está na origem (0,0).

Leia as coordenadas X e Y de uma quantidade indeterminada de pontos no sistema cartesiano. Para cada ponto escreva o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4). O algoritmo será encerrado quando pelo menos uma de duas coordendas for NULA (Pertence a origem ou a algum dos eixos).

Variável | Tipo 
--- | ---
x | inteiro
y | inteiro

Assista [aqui](https://youtu.be/5xLTeIc7KE8) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20repetitiva/quadrante.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20repetitiva/quadrante.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20repetitiva/quadrante.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20repetitiva/quadrante.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20repetitiva/quadrante.py).

### 5. Validação de nota (👨‍🎓)

**Situação-problema:** Leia duas notas e dê a média, até que o valor 0 seja digitado nas duas.

Leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a média semestral. Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao intervalo 0 - 10). Cada nota deve seer validada separadamente. Encerre o algoritmo quando for digitado os valores 0 em ambas as notas.

Variável | Tipo | Fórmula
--- | --- | ---
nota1 | decimal (flutuante) | Média = nota1 + nota2 / 2
nota2 | decimal (flutuante)
media | decimal (flutuante)

Assista [aqui](https://youtu.be/5xLTeIc7KE8) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20repetitiva/validacao.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20repetitiva/validacao.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20repetitiva/validacao.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20repetitiva/validacao.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20repetitiva/validacao.py).

### 6. Combustível (🛢️)

**Situação-problema:** Digite valores e mostre no final a quantidade de dados digitados e imprima uma mensagem de "MUITO OBRIGADO".

Um posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes. Escreva um algoritmo que leia o tipo de combustível abastecido (codificado da seguinte forma: 1. Álcool 2. Gasolina 3. Diesel 4. Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o código informado for o número 4, devendo então mostrar a mensagem "MUITO OBRIGADO", bem como as quantidades de cada combustível.

Variável | Tipo
--- | ---
codigo | inteiro
alcool | inteiro
gasolina | inteiro
diesel | inteiro

Assista [aqui](https://youtu.be/5xLTeIc7KE8) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20repetitiva/combustivel.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20repetitiva/combustivel.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20repetitiva/combustivel.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20repetitiva/combustivel.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20repetitiva/combustivel.py).

### 7. Pares consecutivos (2️⃣)

**Situação-problema:** Some os 5 pares consecutivos de um número diferente de 0 e mostre o resultado no final.

O programa deve ler um valor inteiro X indefinidas vezes. (O programa irá parar quando o valor de X for igual a 0). Para cada X lido, imprima a soma dos 5 pares consecutivos a partir de X, inclusive o X, se for par. Se o valor de entrada for 4, por exemplo, a saída deve ser 40, que é o resultado da operação: 4+6+8+10+12, enquanto que se o valor de entrada for 11, por exemplo, a saída deve ser 80, que é a soma de 12+14+16+18+20.

Variável | Tipo
--- | ---
numero | inteiro
soma | inteiro

Assista [aqui](https://youtu.be/5xLTeIc7KE8) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20repetitiva/pares.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20repetitiva/pares.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20repetitiva/pares.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20repetitiva/pares.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20repetitiva/pares.py).

## Estrutura repetitiva - for

### 1. Tabuada (🧮)

**Situação-problema:** Leia um número inteiro N, daí mostre a tabuada de 1 a 10.

Variável | Tipo
--- | ---
n | inteiro
i | inteiro
tabuada | inteiro

Assista [aqui](https://youtu.be/TAwGROXB7Pw) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20repetitiva/tabuada.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20repetitiva/tabuada.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20repetitiva/tabuada.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20repetitiva/tabuada.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20repetitiva/tabuada.py).

### 2. Soma ímpares (➕)

**Situação-problema:** Leia dois valores inteiros X e Y (em qualquer ordem), daí calcule e mostre a soma dos números ímpares entre eles.

Variável | Tipo
--- | ---
troca | inteiro
soma | inteiro
i | inteiro
num1 | inteiro
num2 | inteiro

Assista [aqui](https://youtu.be/TAwGROXB7Pw) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20repetitiva/soma.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20repetitiva/soma.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20repetitiva/soma.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20repetitiva/soma.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20repetitiva/soma.py).

### 3. Sequência ímpares (➗)

**Situação-problema:** Leia um valor inteiro X, daí mostre os ímpares de 1 até X, um valor por linha, inclusive o X, se for o caso.

Variável | Tipo
--- | ---
x | inteiro
i | inteiro

Assista [aqui](https://youtu.be/TAwGROXB7Pw) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20repetitiva/sequencia.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20repetitiva/sequencia.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20repetitiva/sequencia.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20repetitiva/sequencia.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20repetitiva/sequencia.py).

### 4. Dentro fora (💠)

**Situação-problema:** Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida. Mostre quantos destes valores X estão dentro do intervalo 10 a 20 e quantos estão fora do intervalo.

Variável | Tipo
--- | ---
dentro | inteiro
fora | inteiro
quant | inteiro
i | inteiro
num | inteiro

Assista [aqui](https://youtu.be/TAwGROXB7Pw) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20repetitiva/dentro.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20repetitiva/dentro.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20repetitiva/dentro.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20repetitiva/dentro.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20repetitiva/dentro.py).

### 5. Par ímpar (❓)

**Situação-problema:** Leia um valor inteiro N. Este valor será a quantidade de números inteiros que serão lidos em seguida. Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou ÍMPAR, e também se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), imprima o resultado "NULO".

Variável | Tipo
--- | ---
quant | inteiro
i | inteiro
num | inteiro

Assista [aqui](https://youtu.be/TAwGROXB7Pw) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20repetitiva/impar.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20repetitiva/impar.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20repetitiva/impar.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20repetitiva/impar.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20repetitiva/impar.py).

### 6. Média ponderada (📑)

**Situação-problema:** Leia um valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de teste consiste de 3 valores reais, calcule e mostre a média ponderada, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 e terceiro valor tem peso 5.

Variável | Tipo
--- | ---
quant | inteiro
i | inteiro
num1 | decimal (flutuante)
num2 | decimal (flutuante)
num3 | decimal (flutuante)
media | decimal (flutuante)

Assista [aqui](https://youtu.be/TAwGROXB7Pw) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20repetitiva/ponderada.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20repetitiva/ponderada.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20repetitiva/ponderada.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20repetitiva/ponderada.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20repetitiva/ponderada.py).

### 7. Divisão (➗)

**Situação-problema:** Escreva um algoritmo que leia dois úmeros e imprima o resultado da divisão do primeiro pelo segundo. Caso não for possível, mostre a mensagem "DIVISÃO IMPOSSÍVEL".

Variável | Tipo
--- | ---
quant | inteiro
i | inteiro
num | inteiro
den | inteiro
divisao | decimal (flutuante)

Assista [aqui](https://youtu.be/TAwGROXB7Pw) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20repetitiva/divisao.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20repetitiva/divisao.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20repetitiva/divisao.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20repetitiva/divisao.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20repetitiva/divisao.py).

### 8. Fatorial (❗)

**Situação-problema:** Faça um programa para ler um número natural (no máximo 15), e depois calcule e mostre o fatorial dele.

Variável | Tipo
--- | ---
fat | inteiro
n | inteiro
i | inteiro

Assista [aqui](https://youtu.be/TAwGROXB7Pw) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20repetitiva/fatorial.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20repetitiva/fatorial.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20repetitiva/fatorial.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20repetitiva/fatorial.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20repetitiva/fatorial.py).

### 9. Experiências (🧪)

**Situação-problema:** Leia os dados de um experimento e imprima o resultado do total e percentual.

Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano, quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada. Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento. Leia um valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo de cobaia (R: Rato, S: Sapo e C: Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de cobaia utilizada e percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o percentual deve ser apresentado com dois digitos após o ponto/vírgula.

Variável | Tipo | Fórmula
--- | --- | ---
quantCoSoma | inteiro | Total de cobaias = quantidade total de coelhos + ratos + sapos
quantCoeSoma | inteiro | Percentual = quantidade total do animal / total de cobaias x 100
quantRaSoma | inteiro
quantSaSoma | inteiro
quant | inteiro
i | inteiro
quantCo | inteiro
tipoCo | caractere
percCoe | decimal (flutuante)
percRa | decimal (flutuante)
percSa | decimal (flutuante)

Assista [aqui](https://youtu.be/TAwGROXB7Pw) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20repetitiva/experiencias.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20repetitiva/experiencias.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20repetitiva/experiencias.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20repetitiva/experiencias.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20repetitiva/experiencias.py).

## Vetores, arranjos ou arrays
Vetores, arranjos ou arrays são estruturas de dados fundamentais na programação que permitem armazenar múltiplos valores do mesmo tipo em uma única variável. Eles são amplamente utilizados para manipular coleções de dados de forma eficiente e organizada.

Os vetores são fundamentais para lidar com conjuntos de dados estruturados e são amplamente utilizados em algoritmos de classificação, pesquisa, processamento de imagens, entre outras aplicações na ciência da computação.

### Exercícios
### 1. Negativos

**Situação-problema:** Leia um número inteiro positivo N (máximo = 10) e depois N números inteiros e armazene-os em um vetor. Em seguida, mostre na tela todos os números negativos lidos.

Variável | Tipo
--- | --- 
Lorem Ipsum | Lorem Ipsum

Assista [aqui](https://youtu.be/NReGiAXsUMg) o resultado esperado do programa.

Verifique as soluções nas linguagens C, C++, C#, Java e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Arranjos%20vetoriais/negativos.py).

### 2. Soma vetor

**Situação-problema:** Leia N números reais e armazene-os em um vetor. Em seguida, imprima todos os elementos do vetor e mostre na tela a soma e a média dos elementos do vetor.

Variável | Tipo
--- | --- 
Lorem Ipsum | Lorem Ipsum

Assista [aqui](https://youtu.be/NReGiAXsUMg) o resultado esperado do programa.

Verifique as soluções nas linguagens C, C++, C#, Java e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Arranjos%20vetoriais/soma.py).

### 3. Alturas

**Situação-problema:** Leia nome, idade e altura de N pessoas. Depois, mostre na tela a altura média das pessoas, e mostre também a porcentagem de pessoas com menos de 16 anos, bem como os nomes dessas pessoas (caso houver).

Variável | Tipo
--- | --- 
Lorem Ipsum | Lorem Ipsum

Assista [aqui](https://youtu.be/NReGiAXsUMg) o resultado esperado do programa.

Verifique as soluções nas linguagens C, C++, C#, Java e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Arranjos%20vetoriais/alturas.py).

### 4. Números pares

**Situação-problema:** Leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na tela todos os números pares, e também a quantidade de números pares.

Variável | Tipo
--- | --- 
Lorem Ipsum | Lorem Ipsum

Assista [aqui](https://youtu.be/NReGiAXsUMg) o resultado esperado do programa.

Verifique as soluções nas linguagens C, C++, C#, Java e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Arranjos%20vetoriais/numeros.py).

### 5. Maior posição

**Situação-problema:** Leia N números reais e armazene-os em um vetor. Em seguida, mostre na tela o maior número do vetor (supor não haver empates). Mostre também a posição do maior elemento, considerando a primeira posição como 0 (zero).

Variável | Tipo
--- | --- 
Lorem Ipsum | Lorem Ipsum

Assista [aqui](https://youtu.be/NReGiAXsUMg) o resultado esperado do programa.

Verifique as soluções nas linguagens C, C++, C#, Java e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Arranjos%20vetoriais/maior.py).

### 6. Soma vetores

**Situação-problema:** Leia dois vetores A e B, contendo N elementos cada. Em seguida, gere um terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima o vetor C gerado.

Variável | Tipo
--- | --- 
Lorem Ipsum | Lorem Ipsum

Assista [aqui](https://youtu.be/NReGiAXsUMg) o resultado esperado do programa.

Verifique as soluções nas linguagens C, C++, C#, Java e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Arranjos%20vetoriais/vetores.py).

### 7. Abaixo da média (📉)

**Situação-problema:** Leia um número inteiro N e depois um vetor de N números reais. Em seguida, mostre na tela a média aritmética de todos elementos com três casas decimais. Depois motrar todos os elementos do vetor que estejam abaixo da média, com uma casa decimal cada.

Variável | Tipo
--- | --- 
Lorem Ipsum | Lorem Ipsum

Assista [aqui](https://youtu.be/NReGiAXsUMg) o resultado esperado do programa.

Verifique as soluções nas linguagens C, C++, C#, Java e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Arranjos%20vetoriais/abaixo.py).

### 8. Média pares

**Situação-problema:** Leia um vetor de N números inteiros. Em seguida, mostre na tela a média aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for digitado, mostre a mensagem "NENHUM NÚMERO PAR".

Variável | Tipo
--- | --- 
Lorem Ipsum | Lorem Ipsum

Assista [aqui](https://youtu.be/NReGiAXsUMg) o resultado esperado do programa.

Verifique as soluções nas linguagens C, C++, C#, Java e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Arranjos%20vetoriais/media.py).

### 9. Mais velho (🧓)

**Situação-problema:** Leia um conjunto de nomes de pessoas e suas respectivas ideas. Os nomes devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostre na tela o nome da pessoa mais velha.

Variável | Tipo
--- | --- 
Lorem Ipsum | Lorem Ipsum

Assista [aqui](https://youtu.be/NReGiAXsUMg) o resultado esperado do programa.

Verifique as soluções nas linguagens C, C++, C#, Java e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Arranjos%20vetoriais/mais.py).

### 10. Aprovados (✔️)

**Situação-problema:** Leia um conjunto de N nomes de alunos, bem como as notas que eles tiraram no 1º e 2º semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprima os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou igual a 6.0 (seis).

Variável | Tipo
--- | --- 
Lorem Ipsum | Lorem Ipsum

Assista [aqui](https://youtu.be/NReGiAXsUMg) o resultado esperado do programa.

Verifique as soluções nas linguagens C, C++, C#, Java e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Arranjos%20vetoriais/aprovados.py).

### 11. Dados pessoas (🧑‍🤝‍🧑)

**Situação-problema:** Tem=se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Faça um programa que calcule e escreva a maior e a menor altura do grupo, a média da altura das mulheres e o número de homens.

Variável | Tipo
--- | --- 
Lorem Ipsum | Lorem Ipsum

Assista [aqui](https://youtu.be/NReGiAXsUMg) o resultado esperado do programa.

Verifique as soluções nas linguagens C, C++, C#, Java e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Arranjos%20vetoriais/dados.py).

### 12. Comerciante (🛒)

**Situação-problema:** Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto, mandou digitar um conjunto de N mercadorias, cada uma contendo nome, preço de compra e preço de venda das mesmas. Faça um programa que leia tais dados e determine e escreva quantas mercadoriais proporcionaram lucro abaixo de 10%, lucro entre 10% a 20% e lucro acima de 20%. Determine e escreva também o valro total de compra e de venda de todas as mercadorias, assim como o lucro total.

Variável | Tipo
--- | --- 
Lorem Ipsum | Lorem Ipsum

Assista [aqui](https://youtu.be/NReGiAXsUMg) o resultado esperado do programa.

Verifique as soluções nas linguagens C, C++, C#, Java e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Arranjos%20vetoriais/comerciante.py).

## Matrizes, arranjos ou arrays
Matrizes, arranjos ou arrays bidimensionais são estruturas de dados que estendem os conceitos dos vetores para duas dimensões. Em vez de uma única linha de elementos, as matrizes são organizadas em linhas e colunas, formando uma grade retangular de valores do mesmo tipo. Essa estrutura permite representar dados tabulares ou estruturados em forma de grades, facilitando operações que envolvem conjuntos de dados organizados em múltiplas dimensões.

As matrizes são fundamentais em muitas áreas da computação, incluindo processamento de imagens, simulações numéricas, inteligência artificial, entre outras aplicações onde dados são naturalmente organizados em duas ou mais dimensões.

### Exercícios
1. Lorem Ipsum
2. Lorem Ipsum
3. Lorem Ipsum
4. Lorem Ipsum
5. Lorem Ipsum
6. Lorem Ipsum
7. Lorem Ipsum
