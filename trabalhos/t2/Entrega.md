[Programação Paralela](https://github.com/GabrielCardosoSantos/elc139-2016a) > Trabalhos

Disciplina: Programação Paralela
Nome: Gabriel Cardoso dos Santos
Matricula: 201510710

# T2: Experiências com Profilers

## Parte 1

  - (a) O perfil é afetado pelas opções de configuração?
	Sim, pois é obtido diferentes tamanhos de resposta.
	
	http://prnt.sc/encifs
	
  - (b) Pelo perfil de execução, há alguma função que poderia ser candidata a paralelização? Por quê?
	dot_product, pois consome o maior tempo.
	
	http://prntscr.com/encfja
	
	
	http://prntscr.com/encfoe


## Parte 2

Para a parte 2, foi escolhido um programa simples de ordenação (merge sort) e no Intel VTune foi usado um algoritmo em C de ordenação de matrizes.

+ Visual Studio

	Já vem integrado com a IDE.
	
	Dados de I/O aparece no gráfico.
	http://prntscr.com/encg0c
	
	http://prntscr.com/encg32
	
	http://prntscr.com/encg6o
+ Intel V Tune
	
	Simples de usar.
	
	Não mostra I/O (pelo menos não achei).
	
	http://prntscr.com/encg92

+ Referencias
	https://www.ibm.com/developerworks/br/local/linux/gprof_introduction/
