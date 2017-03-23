[Programação Paralela](https://github.com/GabrielCardosoSantos/elc139-2016a) > Trabalhos

Disciplina: Programação Paralela
Nome: Gabriel Cardoso dos Santos
Matricula: 201510710

# T2: Experiências com Profilers

## Parte 1

  - (a) O perfil é afetado pelas opções de configuração?
	Sim, pois é obtido diferentes tamanhos de resposta.
  - (b) Pelo perfil de execução, há alguma função que poderia ser candidata a paralelização? Por quê?
	dot_product, pois consome o maior tempo.


## Parte 2

Para a parte 2, foi escolhido um programa simples de ordenação (merge sort) e no Intel VTune foi usado um algoritmo em C de ordenação de matrizes.

+ Visual Studio
	Já vem integrado com a IDE.
	Dados de I/O aparece no gráfico.
	
+ Intel V Tune
	Simples de usar.
	Não mostra I/O (pelo menos não achei).


+ Observe e faça anotações sobre: 
   - (a) particularidades de instalação, recursos ou funcionamento dos profilers, 
   - (b) resultados obtidos e 
   - (c) dúvidas e/ou dificuldades encontradas.


## Entrega

No seu repositório da disciplina, na pasta `trabalhos/t2`, crie um documento `Entrega.md`, contendo:
 - Identificação completa da disciplina e do aluno
 - Sumário;
 - Seções separadas para a Parte 1 e a Parte 2;
 - Anotações, respostas, screenshots e quaisquer outras observações adicionais sobre cada um dos itens das Partes 1 e 2;
 - Referências.



