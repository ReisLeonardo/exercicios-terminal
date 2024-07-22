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
### 1. Terreno (🏠):

**Situação-problema:** Calcule a área e o preço de um terreno.

Leia as medidas de largura e comprimento de um terreno retangular com uma casa decimal, bem como o valor do metro quadrado (m²) do terreno com duas casas decimais. Em seguida, o algoritmo deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com duas casas decimais.

Variável | Tipo | Fórmula
--- | --- | ---
largura | decimal (flutuante) | Área = largura x comprimento
comprimento | decimal (flutuante) | Preço = área x metro quadrado
metroquadrado | decimal (flutuante)
area | decimal (flutuante)
preço | decimal (flutuante)

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20sequencial/terreno.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20sequencial/terreno.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20sequencial/terreno.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20sequencial/terreno.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20sequencial/tereno.py).

### 2. Retângulo: 

**Situação-problema:** Mostre o valor da área, perímetro e diagonal comm quatro casas decimais.

Leia as medidas da base e altura de um retângulo. Em seguida, mostre o valor da área, perímetro e diagonal deste retângulo, com quatro casas decimais.

Variável | Tipo | Fórmula
--- | --- | ---
base | decimal (flutuante) | Área = base x altura
altura | decimal (flutuante) | Perímetro = 2*(base+altura)
area | decimal (flutuante) | Diagonal = raíz de base²+altura²
perimetro | decimal (flutuante)
diagonal | decimal (flutuante)

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20sequencial/retangulo.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20sequencial/retangulo.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20sequencial/retangulo.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20sequencial/retangulo.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20sequencial/retangulo.py).

### 3. Idades (🧑‍🤝‍🧑):

**Situação-problema:** Leia o nome e idade de duas pessoas. Ao final mostre uma mensagem com os nomes e a idade média entre essas duas pessoas, com uma casa decimal.

Variável | Tipo | Fórmula
--- | --- | ---
nome1 | caractere | Média das idade = (idade1 + idade2) / 2
nome2 | caractere | 
idade1 | inteiro
idade2 | inteiro
mediaidade | decimal (flutuante)

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20sequencial/idades.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20sequencial/idades.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20sequencial/idades.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20sequencial/idades.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20sequencial/idades.py).


### 4. Soma (🧮): 

**Situação-problema:** Some dois valores inteiros (x + y).

Leia dois valores inteiros e depois mostre na tela o valor da soma destes números.

Variável | Tipo | Fórmula
--- | --- | ---
x | inteiro | Soma = x + y
y | inteiro | 
soma | inteiro

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20sequencial/soma.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20sequencial/soma.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20sequencial/soma.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20sequencial/soma.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20sequencial/soma.py).

### 5. Troco (💰): 

**Situação-problema:** Mostre o valor do troco a ser devolvido ao cliente.

Leia o preço unitário do produto, a quantidade de unidades compradas deste produto, o valor em dinheiro dado pelo cliente e mostre o valor do troco a ser devolvido ao cliente. (suponha que haja dinheiro suficiente). 

Variável | Tipo | Fórmula
--- | --- | ---
precoUnitario | decimal (flutuante) | Preço total = preço unitário x quantidade
precoTotal | decimal (flutuante) | Troco = dinheiro recebido - preço total
dinheiroRecebido | decimal (flutuante)
troco | decimal (flutuante)
quantidade | inteiro

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20sequencial/troco.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20sequencial/troco.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20sequencial/troco.cs), [Java]([#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20sequencial/troco.java)) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20sequencial/troco.py).

### 6. Círculo (🔴): 

**Situação-problema:** Mostre a área do círculo com base no seu raio.

Leia o valor do raio de um círculo, e depois mostre o valor da área do círculo com três casas decimais.

Variável | Tipo | Fórmula
--- | --- | ---
raio | decimal (flutuante) | Área = π x r²
area | decimal (flutuante)

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20sequencial/c%C3%ADrculo.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20sequencial/circulo.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20sequencial/circulo.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20sequencial/circulo.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20sequencial/circulo.py).

### 7. Pagamento (💳): 

**Situação-problema:** Mostre o pagamento que um(a) funcionário(a) deve receber.

Leia o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a quantidade de horas trabalhadas por ele(a). Depois mostre na tela com duas casas decimais.

Variável | Tipo | Fórmula
--- | --- | ---
nome | caractere | Pagamento = valor da hora x hora(s) trabalhada(s)
valorHora | decimal (flutuante)
pagamento | decimal (flutuante)
horaTrabalhada | decimal (flutuante)

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20sequencial/pagamento.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20sequencial/pagamento.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20sequencial/pagamento.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20sequencial/pagamento.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20sequencial/pagamento.py).

### 8. Consumo (🚙): 

**Situação-problema:** Mostre o consumo médio de um veículo.

Leia a distância total (em km) percorrida por um veículo, bem como o total de combustível gasto por este veículo ao percorrer tal distância. Mostre o consumo médio do veículo, com três casas decimais.

Variável | Tipo | Fórmula
--- | --- | ---
distanciaPercorrida | inteiro | Consumo médio = distância percorrida / combustível gasto
combustivelGasto | decimal (flutuante)
consumoMedio | decimal (flutuante)

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20sequencial/consumo.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20sequencial/consumo.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20sequencial/consumo.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20sequencial/consumo.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20sequencial/consumo.py).

### 9. Medidas (📐): 

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

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20sequencial/medidas.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20sequencial/medidas.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20sequencial/medidas.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20sequencial/medidas.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20sequencial/medidas.py).

### 10. Duração (⏰): 

**Situação-problema:** Imprima a relação hora:minuto:segundos de x segundos.

Faça um programa para ler uma duração de tempo em segundos, daí imprima na tela esta duração no formato horas:minutos:segundos.

Variável | Tipo | Fórmula
--- | --- | ---
duracao | inteiro | Hora = duração / 3600
hora | inteiro | Resto = duração % 3600 (resto da divisão)
resto | inteiro | Minuto = resto / 60
minuto | inteiro | Segundo = resto % 60 (resto da divisão)
segundo | inteiro

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20sequencial/duracao.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20sequencial/duracao.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20sequencial/duracao.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20sequencial/duracao.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20sequencial/duracao.py).

## Estrutura condicional 
A estrutura condicional é um conceito fundamental na programação, permitindo que um programa tome decisões com base em condições específicas. Essas estruturas são essenciais para controlar o fluxo de execução do programa de acordo com diferentes situações encontradas durante a sua execução.

## Exercícios
### 1. Notas (🧑‍🎓):

**Situação-problema:** Leia duas notas e mostre o resultado de aprovado ou reprovado.

Faça um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de uma disciplina anual. Em seguida, mostre a nota final que o aluno obteve (com uma casa decimal) no ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a mensagem "REPROVADO".

Variável | Tipo | Fórmula
--- | --- | ---
nota1 | decimal (flutuante) | soma = nota1 + nota2
nota2 | decimal (flutuante)
soma | decimal (flutuante)

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/notas.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/notas.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/notas.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/notas.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/notas.py).

### 2. Baskara (🧮):

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

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/baskara.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/baskara.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/baskara.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/baskara.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/baskara.py).

### 3. Menor de três (3️⃣):

**Situação-problema:** Mostre o menor dos números digitados

Faça um programa para ler três números inteiros. Em seguida, mostre qual o menor dentre os três números lidos. Em caso de empate, mostre apenas uma vez.

Variável | Tipo
--- | --- 
valor1 | inteiro
valor2 | inteiro
valor3 | inteiro
menor | inteiro

**Resultado esperado:** O menor valor é {menor}.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/menor.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/menor.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/menor.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/menor.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/menor.py).

### 4. Operadora (🌐):

**Situação-problema:** Informe ao consumidor quanto ele(a) deve pagar pelos minutos consumidos.

Uma operadora de telefonia cobra R$ 50,00 por um plano básico que dá direito a 100 minutos de telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2,00. Faça um programa para ler a quantidade de minutos que uma pessoa consumiu, daí mostre o valor a ser pago.

Variável | Tipo | Fórmula
--- | --- | ---
minutos | inteiro | gasto = 2 * (minutos - 100)
pagar | inteiro
gasto | inteiro

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/operadora.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/operadora.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/operadora.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/operadora.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/operadora.py).

### 5. Troco verificado (💰):

**Situação-problema:** Informe quanto o(a) cliente deve receber de troco, e se não dinheiro recebido não for suficiente informe quanto precisa para quitar a compra.

Faça um programa para calcular o troco no processo de pagamento de um produto de uma mercearia. O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto, e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o valor restante.

Variável | Tipo | Fórmula
--- | --- | ---
unidade | decimal (flutuante) | total = unidade x quantidade
quantidade | inteiro | troco = recebido - total
recebido | decimal (flutuante)

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/troco.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/troco.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/troco.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/troco.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/troco.py).

### 6. Glicose (🩸):

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

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/glicose.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/glicose.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/glicose.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/glicose.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/glicose.py).

### 7. Dardo (🎯):

**Situação-problema:**  Diga qual foi o dardo que percorreu a maior distância em um lançamento.

No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir. Crie um programa para, dadas as medidas das três tentativas de lançamento, informar qual foi a maior.

Variável | Tipo
--- | ---
distancia1 | decimal (flutuante)
distancia2 | decimal (flutuante)
distancia3 | decimal (flutuante)
maior | decimal (flutuante)

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/dardo.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/dardo.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/dardo.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/dardo.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/dardo.py).

### 8. Temperatura (🥶):

**Situação-problema:** Converta as temperaturas de celsius para fahrenheit ou vice-versa.

Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa. Para isso, construa um programa para ler a letra "C" ou "F" indicando em qual escala vai ser informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com duas casas decimais.

Variável | Tipo | Fórmula
--- | --- | ---
Escala | caractere simples | Celsius para Fahrenheit = (celsius) * 1,8 + 32
Celsius | decimal (flutuante) | Fahrenheit para Celsius = (5 / 9) * (fahrenheit - 32)
celsiustof | decimal (flutuante)
fahrenheit | decimal (flutuante)
fahrenheittoc | decimal (flutuante)

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/temperatura.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/temperatura.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/temperatura.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/temperatura.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/temperatura.py).

### 9. Lanchonete (🍔): 

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

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/lanchonete.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/lanchonete.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/lanchonete.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/lanchonete.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/lanchonete.py).

### 10. Múltiplos (✖️):

**Situação-problema:** Informe se os números digitados são multíplos

Faça um programa para ler dois números inteiros, e dizer se um número é múltiplo do outro. Os números podem ser digitados em qualquer ordem.

Variável | Tipo | Fórmula
--- | --- | ---
x | inteiro | Se o resto da divisão for 0 é múltiplo
y | inteiro | Se o resto da divisão for 0 não é múltiplo

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/multiplos.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/multiplos.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/multiplos.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/multiplos.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/multiplos.py).

### 11. Aumento (🤑):

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

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/aumento.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/aumento.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/aumento.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/aumento.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/aumento.py).

### 12. Tempo de jogo (🎮):

**Situação-problema:**

Leia a hora inicial e a final de um jogo. E em seguida, calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.

Variável | Tipo | Fórmula
--- | --- | ---
horaInicial | inteiro | Se menor que 24, hora = (24 - horainicial) + horaFinal
horaFinal | inteiro | Se maior que 24, hora = hora - 24
hora | inteiro


Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/tempo.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/tempo.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/tempo.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/tempo.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/tempo.py).

### 13. Coordenadas (🔲):

**Situação-problema:** Informe em qual quadrante está localizado as coordendas, sabendo que (Q1 = x e y positivo, Q2 = x negativo e y positivo, Q3 = x e y negativo, Q4 = y negativo e x positivo.

Leia os valores das coordenadas X e Y de um ponto no plano cartesiano. A seguir, determine qual o quadrante pertence o ponto (Q1, Q2, Q3 ou Q4). Se o ponto estiver na origem, escreva a mensagem "origem". Se o ponto estiver sobre um dos eixos escreva "Eixo X" ou "Eixo Y".

Variável | Tipo 
--- | ---
x | decimal (flutuante)
y | decimal (flutuante)

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/coordenadas.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/coordenadas.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20condicional/coordenadas.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20condicional/coordenadas.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/coordenadas.py).

## Estrutura repetitiva
A estrutura repetitiva, também conhecida como estrutura de repetição ou estrutura de loop, é utilizada na programação para executar um bloco de código repetidamente enquanto uma condição específica for verdadeira, ou por um número pré-determinado de vezes. Essa capacidade é fundamental para automatizar tarefas que precisam ser executadas várias vezes sem a necessidade de repetir o mesmo código manualmente.

### Exercícios

### 1. Crescente (📈):

**Situação-problema:** Faça um programa que leia dois números inteiros diferentes e diga se está na ordem crescente ou decrescente, se for digitado o mesmo número finalize o programa.

Leia dois inteiros X e Y. Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O programa deve finalizar quando forem digitados dois valores iguais.

Variável | Tipo 
--- | ---
x | inteiro
y | inteiro

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20repetitiva/crescente.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20repetitiva/crescente.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20repetitiva/crescente.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20repetitiva/crescente.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20repetitiva/crescente.py).

### 2. Média idades (🧑‍🤝‍🧑):

**Situação-problema:** Leia diversas idades e mostre a média no final, se o resultado inicial for negativo não calcule.

Leia um número indeterminado de dados, contendo cada um, a idade de um indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcule e imprima a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez, mostre a mensagem "impossível calcular".

Variável | Tipo 
--- | ---
soma | inteiro
contador | inteiro
idade | inteiro
media | decimal (flutuante)

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20repetitiva/media.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20repetitiva/media.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20repetitiva/media.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20repetitiva/media.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20repetitiva/media.py).

### 3. Senha fixa (💻):

**Situação-problema:** Leia as tentativas de acesso de senha e conceda o acesso apenas quando for a senha correta. Senha: 2024.

Repita a leitura de uma senha até que ela seja válida. Para cada leitura de senha incorreta informada, escreva a mensagem "Senha inválida! Tente novamente: ". Quando a senha for informada corretamente deve ser impressa a mensagem "Acesso permitido" e o algoritmo encerrado. Considere que a senha correta é o valor 2024.

Variável | Tipo 
--- | ---
senha | inteiro

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20repetitiva/senha.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20repetitiva/senha.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20repetitiva/senha.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20repetitiva/senha.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20repetitiva/senha.py).

### 4. Quadrante (🔲):

**Situação-problema:**

Leia as coordenadas X e Y de uma quantidade indeterminada de pontos no sistema cartesiano. Para cada ponto escreva o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4). O algoritmo será encerrado quando pelo menos uma de duas coordendas for NULA (Pertence a origem ou a algum dos eixos).

Variável | Tipo 
--- | ---
x | inteiro
y | inteiro

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens

### 5. Validação de nota (👨‍🎓):

**Situação-problema:** Leia duas notas e dê a média, até que o valor 0 seja digitado nas duas.

Leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a média semestral. Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao intervalo 0 - 10). Cada nota deve seer validada separadamente. Encerre o algoritmo quando for digitado os valores 0 em ambas as notas.

Variável | Tipo | Fórmula
--- | --- | ---
nota1 | decimal (flutuante) | Média = nota1 + nota2 / 2
nota2 | decimal (flutuante)
media | decimal (flutuante)

Assista [aqui](#) o resultado esperado do programa.

Verifique as soluções nas linguagens

6. Lorem Ipsum
7. Lorem Ipsum
8. Lorem Ipsum
9. Lorem Ipsum
10. Lorem Ipsum
11. Lorem Ipsum
12. Lorem Ipsum
13. Lorem Ipsum
14. Lorem Ipsum
15. Lorem Ipsum
16. Lorem Ipsum

## Vetores, arranjos ou arrays
Vetores, arranjos ou arrays são estruturas de dados fundamentais na programação que permitem armazenar múltiplos valores do mesmo tipo em uma única variável. Eles são amplamente utilizados para manipular coleções de dados de forma eficiente e organizada.

Os vetores são fundamentais para lidar com conjuntos de dados estruturados e são amplamente utilizados em algoritmos de classificação, pesquisa, processamento de imagens, entre outras aplicações na ciência da computação.

### Exercícios
1. Lorem Ipsum
2. Lorem Ipsum
3. Lorem Ipsum
4. Lorem Ipsum
5. Lorem Ipsum
6. Lorem Ipsum
7. Lorem Ipsum
8. Lorem Ipsum
9. Lorem Ipsum
10. Lorem Ipsum
11. Lorem Ipsum
12. Lorem Ipsum

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
