#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main ()
{
    int *a, *b, iteracoes=10000, x, m;
    clock_t tempo;
    double tempo_total = 0.0;

    a = (int *)malloc(sizeof(int)*1000000);
    b = (int *)malloc(sizeof(int)*1000000);

    for (x=0; x<iteracoes; x++)
    {
        tempo = clock();

        #pragma novector
        for(int i = 0; i < 1000000; i++) 
            a[i] = b[i] +1; 
        
        tempo = clock() - tempo;
        tempo_total += ((double)tempo)/CLOCKS_PER_SEC;
    }
    
    printf ("tempo medio: %lf\n",tempo_total/iteracoes);

}

