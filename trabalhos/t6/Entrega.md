[Programação Paralela](https://github.com/AndreaInfUFSM/elc139-2017a) > Trabalhos

# T6: Experiências com MPI

## Parte 1

+ Particionamento: part_size = n / ntasks, init_vectors(a, b, part_size);;
 
  Aglomeração: O processo pai recebe e acumula, MPI_Recv(&dot, 1, MPI_DOUBLE, MPI_ANY_SOURCE, MPI_ANY_TAG, MPI_COMM_WORLD, &status) mydot += dot;

  Comunicação: Todos os processos filhos do 0, enviam para ele o seu calculo - MPI_Send(&mydot, 1, MPI_DOUBLE, MASTER, msg_tag, MPI_COMM_WORLD) 

  Mapeamento: MPI_Init(&argc, &argv) MPI_Comm_rank(MPI_COMM_WORLD, &taskid) MPI_Comm_size(MPI_COMM_WORLD, &ntasks)
 

+ | Caso | Tamanho do vetor | Repetições | Num. de Processos | Host | Tempo de execução | SpeedUp |
  | ---- | ---------------- | ---------- | ----------------- | ---- | ----------------- |------- |
  | A    | 30000000 | 100 | 1 | lsc4 OU lsc5 | 15510056 | |
  | B    | 30000000 | 100 | 2 | lsc4 OU lsc5 | 7925493 | 1.95 |
  | C    | 30000000 | 100 | 2 | lsc4 E lsc5 |  ||
  | D    | 30000000 | 100 | 4 | lsc4 OU lsc5 | 4164210 | 3.72 |
  | E    | 30000000 | 100 | 4 | lsc4 E lsc5 |  | |


## Parte 2

+ [mpi_msg.c](mpi_msg.c) 

+ [mpi_errado1.c](mpi_errado1.c) É preciso que coloque o destinario 0 para o processo 1, e destinario 1 para o processo 0, e também remover a linha de atribuição a tag.

+ [mpi_errado2.c](mpi_errado2.c) Faltou finalizar.


## Material de apoio
- http://www.eee.ufg.br/~mcastro/disciplinas/so/trabalhos/GrupoE/como%20funciona.htm

- http://silveiraneto.net/2007/08/29/ola-mundo-paralelo-com-mpi/

- [Tutorial MPI](https://computing.llnl.gov/tutorials/mpi/)  
  Tutorial do Lawrence Livermore National Laboratory (LLNL) sobre MPI.
