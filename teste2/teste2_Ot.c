#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void vetores(int *a, int *b, int m);

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

        for (m=0; m<10; m++)
            vetores(a, b, m);

        tempo = clock() - tempo;
        tempo_total += ((double)tempo)/CLOCKS_PER_SEC;
    }
    
    printf ("tempo medio: %lf\n",tempo_total/iteracoes);

}

void vetores(int *a, int *b, int m)
{ 
    #pragma vector always
    for(int i = 0; i < 100000; i++) 
        a[i*m] = b[i*m]; 
}