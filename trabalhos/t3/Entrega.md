# T3: Programação Paralela Multithread

## Entrega

Nome: Gabriel Cardoso dos Santos
Matricula: 201510710
Curso: Ciência da Computação


## Questões Pthreads


1. Explique como se encontram implementadas as 4 etapas de projeto: particionamento, comunicação, aglomeração, mapeamento (use trechos de código para ilustrar a explicação).

   Particionamento -

   Comunicação - A comunicação é feita pelo trecho de código "dotdata.c += sum", onde existe o lock e unlock das threads para evitar problemas de condição de corrida.

   Aglomeração -

   Mapeamento -

2. Considerando o tempo (em segundos) mostrado na saída do programa, qual foi a aceleração com o uso de threads?



3. A aceleração (speedup) se sustenta para outros tamanhos de vetores, números de threads e repetições? Para responder a essa questão, você terá que realizar diversas execuções, variando o tamanho do problema (tamanho dos vetores e número de repetições) e o número de threads (1, 2, 4, 8..., dependendo do número de núcleos). Cada caso deve ser executado várias vezes, para depois calcular-se um tempo de processamento médio para cada caso. Atenção aos fatores que podem interferir na confiabilidade da medição: uso compartilhado do computador, tempos muito pequenos, etc.



4. Elabore um gráfico/tabela de aceleração a partir dos dados obtidos no exercício anterior.




5. Explique as diferenças entre [pthreads_dotprod.c](pthreads_dotprod/pthreads_dotprod.c) e [pthreads_dotprod2.c](pthreads_dotprod/pthreads_dotprod2.c). Com as linhas removidas, o programa está correto?
   Não, pois sem o lock e unlock se perde a consistência no dado, trazendo um resultado não esperado.



## Implementação OpenMP

1. Implemente um programa equivalente a [pthreads_dotprod.c](pthreads_dotprod/pthreads_dotprod.c) usando OpenMP.

2. Avalie o desempenho do programa em OpenMP, usando os mesmos dados/argumentos do programa com threads POSIX.