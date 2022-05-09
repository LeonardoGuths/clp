#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <omp.h>

#define T_MAT 256
double A[T_MAT][T_MAT], B[T_MAT][T_MAT], R[T_MAT][T_MAT];


int main()
{
    double tempo;
    int i, j, k, x, iteracoes=1000;
    time_t time1, time2;

    for (i=0; i<T_MAT; i++)
    {
        for (j=0; j<T_MAT; j++)
        {
            A[i][j] = (double)rand()/(double)RAND_MAX;
            B[i][j] = (double)rand()/(double)RAND_MAX;
            R[i][j] = 0.0;
        }
    }

    tempo = omp_get_wtime();

    #pragma omp parallel for
    for (x=0; x<iteracoes; x++)
    { 
        for (i=0; i<T_MAT; i++)
        {
            for (j=0; j<T_MAT; j++)
            {
                for (k=0; k<T_MAT; k++)
                {
                    R[i][j] += A[i][k] * B[k][j];
                }
            }
        }
    }

    tempo = omp_get_wtime() - tempo;


    printf ("tempo total de cpu: %lf\n",tempo);
}