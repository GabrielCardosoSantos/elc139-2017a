

# T4: Bug em OpenMP

Nome: Gabriel Cardoso dos Santos
Matricula: 201510710
Disciplina: Programação Paralela

## Questões

1. [omp_bug2.c](https://computing.llnl.gov/tutorials/openMP/samples/C/omp_bug2.c)?
   O programa não mostra corretamente as saídas de cada thread. O problema se encontra nas variáveis "tid" e "total" onde todas threads acessam a variável ao mesmo tempo, causando inconsistência na resposta.

2. A solução é simples, apenas informar que as variáveis "tid" e "total" sejam privadas e que o laço percorra de forma estática (static). [omp_bug2.c]

