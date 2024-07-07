# Exercícios comentados nas linguagens C, C++, Java, C# e Python
Tente executar os exercícios abaixo sem olhar a resolução deles na pasta de cada linguagem de programação. Lembre-se de que todos os exercícios devem ter um resultado no terminal, ou seja, não devem criar aplicativos ou janelas clicáveis com vários recursos. O objetivo destes exercícios é entender a lógica de cada linguagem.

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

**Resultado esperado**: A área do terreno é {area com 4 casas decimais}m² e o seu preço é R${preco}.

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

**Resultado esperado**: A área do retângulo é {area}, seu perímetro é {perimetro} e a diagonal é {diagonal}.

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

**Resultado esperado**: A idade média de {nome1} e {nome2} é de {mediaidade} anos.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20sequencial/idades.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20sequencial/idades.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20sequencial/idades.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20sequencial/idades.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20sequencial/idades.py).


### 4. Soma (🧮): 

**Situação-problema:** Some dois valores inteiros (x + y).

Leia dois valores inteiros e depois mostre na tela o valor da soma destes números.

Variável | Tipo | Fórmula
--- | --- | ---
x | inteiro | Soma = x + y
y | inteiro | 
soma | inteiro

**Resultado esperado**: A soma de {x} + {y} é igual a {soma}.

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

**Resultado esperado**: O troco que o cliente deve receber é de R${troco}.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20sequencial/troco.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20sequencial/troco.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20sequencial/troco.cs), [Java]([#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20sequencial/troco.java)) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20sequencial/troco.py).

### 6. Círculo (🔴): 

**Situação-problema:** Mostre a área do círculo com base no seu raio.

Leia o valor do raio de um círculo, e depois mostre o valor da área do círculo com três casas decimais.

Variável | Tipo | Fórmula
--- | --- | ---
raio | decimal (flutuante) | Área = π x r²
area | decimal (flutuante)

**Resultado esperado:** A área do círculo é {area}.

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

**Resultado esperado:** O pagamento para {nome} deve ser R${pagamento}.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20sequencial/pagamento.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20sequencial/pagamento.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20sequencial/pagamento.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20sequencial/pagamento.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20sequencial/pagamento.py).

### 8. Consumo (🚙): 

**Situação-problema:** Mostre o consumo médio de um veículo.

Leia a distância total (em km) percorrida por um veículo, bem como o total de combustível gasto por este veículo ao percorrer tal distância. Mostre o consumo médio do veículo, com três casas decimais.

Variável | Tipo | Fórmula
--- | --- | ---
distanciaPercorrida | inteiro | Consumo médio = distância percorrida / combustível gasto
combustivelGasto | decimal (flutuante)
consumoMedio | decimal (flutuante)

**Resultado esperado:** O consumo médio foi de {consumomedio}km.

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

**Resultado esperado:** A área do quadrado é {areaQuadrado}, do triângulo {areaTriangulo} e do trapézio é {areaTrapezio}.

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

**Resultado esperado:** {hora}:{minuto}:{segundo}

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20sequencial/duracao.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20sequencial/duracao.cpp), [C#](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%23/Estrutura%20sequencial/duracao.cs), [Java](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Java/Estrutura%20sequencial/duracao.java) e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20sequencial/duracao.py).

## Estrutura condicional 
A estrutura condicional é um conceito fundamental na programação, permitindo que um programa tome decisões com base em condições específicas. Essas estruturas são essenciais para controlar o fluxo de execução do programa de acordo com diferentes situações encontradas durante a sua execução.

### Exercícios
### 1. Notas (🧑‍🎓):

**Situação-problema:** Leia duas notas e mostre o resultado de aprovado ou reprovado.

Faça um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de uma disciplina anual. Em seguida, mostre a nota final que o aluno obteve (com uma casa decimal) no ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a mensagem "REPROVADO".

Variável | Tipo | Fórmula
--- | --- | ---
nota1 | decimal (flutuante) | soma = nota1 + nota2
nota2 | decimal (flutuante)
soma | decimal (flutuante)

**Resultado esperado:** A sua nota final foi {soma}, você foi {resultado}.

Verifique as soluções nas linguagens [C](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C/Estrutura%20condicional/notas.c), [C++](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/C%2B%2B/Estrutura%20condicional/notas.cpp), [C#](), [Java]() e [Python](https://github.com/ReisLeonardo/exercicios-terminal/blob/main/Python/Estrutura%20condicional/notas.py).

### 2. Baskara (🧮):

**Situação-problema:** Leia três coeficientes e calcule a fórmula de baskara.

Faça um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula de Baskara, calcule e mostre os valores das raízes x1 e x2 da equação com quatro casas decimais. Se a equação não possuir raízes reais, mostre uma mensagem.

Variável | Tipo | Fórmula
--- | --- | ---
a | inteiro | delta = b² - 4 x a x c
b | inteiro | x = -b+/- raiz de delta / 2 x a
c | inteiro
x1 | decimal (flutuante)
x2 | decimal (flutuante)

**Condições para ter raízes:**
* Delta não pode ser negativo.
* Coeficiente "a" não pode ser zero.

**Resultado esperado:** O x1 = {x1} e o x2 = {x2}. / Esta equação não possui raízes reais.

Verifique as soluções nas linguagens [C](), [C++](), [C#](), [Java]() e [Python]().

### 3. Menore de três (3️⃣):

**Situação-problema:**

Faça um programa para ler três números inteiros. Em seguida, mostre qual o menor dentre os três números lidos. Em caso de empate, mostre apenas uma vez.

Variável | Tipo | Fórmula
--- | --- | ---
valor1 | inteiro
valor2 | inteiro
valor3 | inteiro
menor | inteiro

**Resultado esperado:** O menor valor é {menor}.

Verifique as soluções nas linguagens [C](), [C++](), [C#](), [Java]() e [Python]().

4. Lorem Ipsum
5. Lorem Ipsum
6. Lorem Ipsum
7. Lorem Ipsum
8. Lorem Ipsum
9. Lorem Ipsum
10. Lorem Ipsum
11. Lorem Ipsum
12. Lorem Ipsum
13. Lorem Ipsum

## Estrutura repetitiva
A estrutura repetitiva, também conhecida como estrutura de repetição ou estrutura de loop, é utilizada na programação para executar um bloco de código repetidamente enquanto uma condição específica for verdadeira, ou por um número pré-determinado de vezes. Essa capacidade é fundamental para automatizar tarefas que precisam ser executadas várias vezes sem a necessidade de repetir o mesmo código manualmente.

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
