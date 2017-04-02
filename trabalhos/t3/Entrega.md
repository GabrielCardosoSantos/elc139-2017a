# T3: Programação Paralela Multithread

## Entrega

Nome: Gabriel Cardoso dos Santos

Matricula: 201510710

Curso: Ciência da Computação

## Questões Pthreads

1. Particionamento - Na forma que foi estruturado, um exemplo é na parte do código "mysum += (a[i] * b[i])" onde pode ocorrer que cada thread pode fazer o calculo em paralelo. O espaço que cada uma irá percorrer, está em "int start = offset*wsize" e "int end = start + wsize;" onde offset seria o número da thread.

   Comunicação - A comunicação é feita pelo trecho de código "dotdata.c += mysum", onde existe o lock e unlock das threads para evitar problemas de concorrência.

   Aglomeração - É dado por "wsize = atoi(argv[2])" e "dotdata.wsize = wsize" onde "argv[2]" é informado na execução do programa.

   Mapeamento - Apenas a inicialização delas foi designado. pthread_create(&threads[i], &attr, dotprod_worker, (void * ) i)


2. 1 thread, 7.6 seg (7640118 usec)
   2 threads, 4.2 seg (4295634 usec)



3. Pelos dados testados, é aproximado de 2 mesmo tendo mais threads.


4.          1 Thread

|  WorkSize  | Repetições | Tempo (s) | SpeedUp |
|------------|------------|-----------|---------|
|   600000   |   10000    |   22.6    |    1    |
|   600000   |    5000    |   11.1    |    1    |

            2 Threads

|  WorkSize  | Repetições | Tempo (s) | SpeedUp |
|------------|------------|-----------|---------|
|  300000    |   10000    |   12.6    |  1.883  |
|  300000    |    5000    |    6.3    |  1.761  |


            4 Threads

|  WorkSize  | Repetições | Tempo (s) | SpeedUp |
|------------|------------|-----------|---------|
|  150000    |   10000    |   11.7    |  1.931  |
|  150000    |    5000    |    5.6    |  1.982  |




5. Não, pois sem o lock e unlock se perde a consistência no dado, trazendo um resultado não esperado.



## Implementação OpenMP

1. [pthreads_dotprod.c](pthreads_dotprod/pthreads_dotprod.c) usando OpenMP.


2.                 1 Thread

|  WorkSize  | Repetições | Tempo (s) | SpeedUp |
|------------|------------|-----------|---------|
|   600000   |   10000    |   23.4    |    1    |
|   600000   |    5000    |   12.8    |    1    |

                  2 Threads

|  WorkSize  | Repetições | Tempo (s) | SpeedUp |
|------------|------------|-----------|---------|
|  300000    |   10000    |   13.6    |  1.720  |
|  300000    |    5000    |    7.1    |  1.802  |


                  4 Threads

|  WorkSize  | Repetições | Tempo (s) | SpeedUp |
|------------|------------|-----------|---------|
|  150000    |   10000    |   12.7    |  1.842  |
|  150000    |    5000    |    6.5    |  1.969  |



## Referências
https://www.ibm.com/developerworks/br/aix/library/au-aix-openmp-framework/

http://www.inf.ufrgs.br/~nicolas/pdf/openmp.pdf
