

# T4: Bug em OpenMP

Nome: Gabriel Cardoso dos Santos
Matricula: 201510710
Disciplina: Programação Paralela

## Questões

1. O programa não mostra corretamente as saídas de cada thread. O problema se encontra nas variáveis "tid" e "total" onde todas threads acessam a variável ao mesmo tempo, causando inconsistência na resposta.

2. A solução é simples, apenas informar que as variáveis "tid" e "total" sejam privadas. [omp_bug2.c](omp_bug2.c)

