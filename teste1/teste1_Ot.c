#include <stdio.h>
#include <time.h>

int main ()
{
    clock_t tempo;
    int matriz[500][500], i, j, iteracoes=10000, x;
    double tempo_total = 0.0;

    for (i=0; i<500; i++)
    {
        for (j=0; j<500; j++)
        {
            matriz[i][j] = i+j;
        }
    }

    for (x=0; x<iteracoes; x++)
    {
        for (i=0; i<500; i++)
        {
        tempo = clock();
        for (j=0; j<500; j++)
        {
            matriz[i][j] = ((matriz[i][j] + matriz[j][i]) + 4) + 6;
        }
        tempo = clock() - tempo;
        tempo_total += ((double)tempo)/CLOCKS_PER_SEC;
        }
    }
    
    printf ("tempo medio: %lf\n",tempo_total/iteracoes);

}