#include<stdio.h>

//DECRARACAO DE CONSTANTES
#define TAMANHO 10

int main()
{
    int s[TAMANHO], j;

    for(j=0; j<=TAMANHO-1; j++)
        s[j] = 2+2 * j;

    printf("%s%13s\n", "elemento", "valor");

    for(j=0; j<=TAMANHO-1; j++)
        printf("%8d%13d\n", j, s[j]);

    return 0;
}