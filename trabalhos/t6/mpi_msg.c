/*
 *  Calcula produto escalar (dot product) de 2 vetores.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>

#define MASTER 0


int main(int argc, char **argv)
{
   int i;
   int rank, ntasks;
   int msg_tag = 0;
   int dot = 0, recebe = 0;
   MPI_Status status;

   MPI_Init(&argc, &argv);
   MPI_Comm_rank(MPI_COMM_WORLD, &rank);
   MPI_Comm_size(MPI_COMM_WORLD, &ntasks);

   if(rank == 0){
     MPI_Send(&dot, 1, MPI_INT, rank + 1, msg_tag, MPI_COMM_WORLD);
   } else if (rank < ntasks - 1){
     MPI_Recv(&dot, 1, MPI_INT, MPI_ANY_SOURCE, MPI_ANY_TAG, MPI_COMM_WORLD, &status);
     dot++;
     MPI_Send(&dot, 1, MPI_INT, rank + 1, msg_tag, MPI_COMM_WORLD);
   } else if(rank == ntasks - 1){
     MPI_Recv(&dot, 1, MPI_INT, MPI_ANY_SOURCE, MPI_ANY_TAG, MPI_COMM_WORLD, &status);
     printf("%d\n", dot);
   }

   MPI_Finalize();
   return EXIT_SUCCESS;
}
