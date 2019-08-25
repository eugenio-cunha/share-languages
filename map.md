* Rust 
    - https://www.rust-lang.org/
    - $72k
    - https://www.eximiaco.tech/pt/2019/05/26/como-a-linguagem-rust-resolve-o-desafio-de-desalocacao-de-objetos-com-ownership-sem-memory-leaks-e-sem-gc/
    - Pelo pouco que podemos ver até aqui, o conceito de ownership parece impor uma série de dificuldades ao programador. Entretanto, ela se compensa!
      Sabendo que apenas uma variável, em um dado momento, tem a propriedade de um valor, o compilador de Rust consegue gerar código nativo inteligente de desalocação, com segurança assegurada durante a compilação, sem os memory-leaks das linguagens não gerenciadas e sem os overheads de processamento causados pelos GCs.
    - https://www.eximiaco.tech/pt/2019/06/04/como-a-linguagem-rust-garante-que-erros-sejam-tratados/
    - https://www.eximiaco.tech/pt/2019/05/29/como-a-linguagem-rust-impede-na-compilacao-a-ocorrencia-de-acessos-invalidos-a-memoria/

* Go 
    - https://golang.org/ 
    - $80k
    - Go é uma linguagem moderna, criada com o objetivo principal de melhorar a produtividade no desenvolvimento em larga escala de servidores, baseado nas experiências de alguns times dentro do Google. Hoje, mais de quatro anos após ter sido anunciada publicamente, cada vez mais empresas têm adotado a linguagem para escrever diversos tipos diferentes de aplicações, muito além dos servidores. Go traz um misto interessante de recursos de alto e baixo nível que a torna atraente para diferentes público s. Suas principais características incluem o controle inteligente de dependências, compilação rápida e eficiente, sintaxe simples, gerenciamento automático de memória incluindo um coletor de lixo, sistema de tipos forte e estático, funções de primeira classe e suporte nativo e de alto nível para concorrência. Este livro apresenta ao leitor os recursos da linguagem Go e importantes partes de sua biblioteca padrão, sempre incluindo exemplos relevantes que demonstram o uso de cada recurso.
    - Quando devo utilizar?
        -Quando o seu domínio for a máquina ou o desempenho do seu programa for crítico. Nessas situações, o Go pode ser uma ótima escolha
    - exemplo https://play.golang.org/p/9mhGep5b-T6
    - exemplo https://play.golang.org/p/u4WI3tvLWa2
    - https://imasters.com.br/back-end/trabalhando-com-go-golang-a-linguagem-do-google
    - https://www.linkedin.com/pulse/goroutines-e-concorr%C3%AAncia-jefferson-otoni-lima/
    - "“Concorrência é sobre lidar com muitas coisas ao mesmo tempo. Paralelismo é fazer muitas coisas ao mesmo tempo”
      Se você tiver apenas um processador, seu programa ainda pode ser concorrente, mas não pode ser paralelo. Por outro lado, um programa concorrente bem escrito pode ser executado de forma eficiente em paralelo em um multiprocessador"
    - Go não oferece suporte à aritmética de ponteiros.
    - Um dos propósitos da criação da linguagem Go é unira facilidade dese programar numa linguagem interpretada de tipagem dinâmica à segurança e eficiência de uma compiladade tipagem estática. Portanto, foram incluídas na linguagem técnicas como inferênciade tipos para prover construções concisaspara declaraçãoe atribuição de variáveis. Alémdisso,alinguagempossuiconstruçõesecomandosespecíficosquefacilitamaprogramaçãoconcorrente (GOLANG, 2015).




* Articles
    - https://www.thoughtworks.com/pt/insights/blog/how-programming-languages-have-evolved
    - https://fluxoconsultoria.poli.ufrj.br/blog/tecnologia-informacao/linguagem-de-programacao-aplicacoes/
    - https://medium.com/trainingcenter/golang-d94e16d4b383
    - http://ptcomputador.com/P/cc-programming/85509.html
    - https://dextra.com.br/pt/introducao-ao-kotlin-coroutines/
    - https://www.ibm.com/developerworks/br/library/os-developers-know-rust/index.html
    - https://ralphavalonbr.wordpress.com/2016/04/20/10012/
    - https://medium.com/developers-writing/fibonacci-sequence-algorithm-in-javascript-b253dc7e320e

## Explicar
* Explicar paradigmas
* Linguagem com funções de primeira classe
    - Para entender o que funções de primeira classe são , o programador deve entender de programação orientada a objetos, funções 
    - Uma linguagem tem funções de primeira classe, quando funções podem ser tratadas como valores que podem ser passados, manipulados, retornados... ou seja, é       possível operar funções. Este conceito é um atributo da linguagem, ou ela tem ou não tem.
    - O termo "primeira classe" significa que a função é tratada da mesma forma que qualquer tipo de valor no javascript. Por exemplo, para você atribuir um valor a   uma variável.
    - Em JavaScript e em outras linguagens modernas as funções são de primeira classe, isto é, são objetos que possuem propriedades e métodos e podem ser passados     como argumentos, serem atribuídos a variáveis ou retornados como qualquer outro objeto
    - Em palavras simples, isso significa que podemos passar funções por parâmetros, retornar uma função de outra função, armazenar funções em variáveis e etc
    - Na maioria das linguagens de programação orientadas a objeto , todos os objetos são objetos de primeira classe. Mas outras entidades , tais como funções , não   são objetos de primeira classe.
    

* Linguagem com funções de ordem superior 
    - Uma função de ordem superior é uma função que recebe outras funções como argumentos ou que produz outras funções como resultados
    - Funções de ordem superior são funções que recebem uma ou mais funçõescomo argumentos ou que têm uma função como saída. Com isso, é possívelcriar o que são chamadasfunction factoriesque são funções que a partir deoutras funções simples são capazes de realizar ações mais complexas.JavaScript é uma linguagem de programação que possibilita a definição defunções de ordem superior.
* Linguagem com funções anônimas
* Explicar Goroutines/Coroutines
    - Goroutines => A criação de uma thread 
* Arquitetura de uma linguagem
* Padrões de projeto
    - Apesar de padrões de projeto serem independente de linguagens, isso não quer dizer que todo padrão possa ser aplicado a toda linguagem.

## Textos
Mais do que linguagens, aprenda a “programar”

Antes de terminar o artigo, um ponto muito importante. Existem centenas de linguagens de programação em uso, e muitas delas são importantes para o mercado. Mais do que se tornar “fera” em algumas delas, é preciso não esquecer dos conteúdos fundamentais de algoritmos e estruturas de dados, paradigmas de linguagens de programação e lógica de programação. Em última instância, todo software se resume a um algoritmo e a execução determinada lógica. Assim, ter uma boa base nesses conteúdos com certeza faz a diferença na hora de aprender e aplicar na prática novas linguagens de programação.


## Perguntas importante da introdução

* Simplificando a complexidade?
* Quando devo utilizar?
* Existe bala de prata?
* WebAssembly?
* E o escopo?
* Ela resolve algum problema?
* Paradigmas?

## Curiosidades
* https://exame.abril.com.br/tecnologia/conheca-10-linguagens-bizarras-nas-quais-voce-nunca-vai-ter-que-programar/
* https://naoechico.wordpress.com/2011/05/30/linguagens-de-programacao-bizarras/
* Befunge => Essa é uma linguagem escrita bidimensionalmente
* Brainfuck => 8 operações
* Emojinal
* Malbolge => (o 8 circulo dos 9 circulos na obra Inferno de Dante)

## falar maximo 3 linguagens
* https://insights.stackoverflow.com/trends?tags=go%2Crust%2Ckotlin
* Abordar
    - paradigmas
        - Imperativo/procedural
        - Estruturado
        - Orientado a Objetos
        - Funcional
        - Lógico
    - escopo
    - problemas que resolve
    - quando usar
    - quando não usar

## Conclusões
* Dominar paradigmas permiter entrar e sair de linguanges sem uma grande curva de apredizado 
* aprender uma linguagem ajuda a entender outra linguagem exemplo: "“Concorrência é sobre lidar com muitas coisas ao mesmo tempo. Paralelismo é fazer muitas coisas    ao mesmo tempo” Se você tiver apenas um processador, seu programa ainda pode ser concorrente, mas não pode ser paralelo. Por outro lado, um programa concorrente     bem escrito pode ser executado de forma eficiente em paralelo em um multiprocessador"   