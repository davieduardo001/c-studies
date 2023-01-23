#include<stdio.h>
#define TAMANHO 10

//ORDENA EM ORDEM ASCENDENTE
int main()
{
    int a[TAMANHO] = {2, 56, 3, 13, 53, 59, 67, 83, 84, 32};
    int i, pass, hold;

    printf("Itens de dados na ordem orginal:\n");
    for(i=0; i<=TAMANHO-1; i++)
        printf("%4d", a[i]);
    
    for(pass = 1; pass<=TAMANHO-1; pass++)  //passadas
        for(i=0; i<=TAMANHO-2; i++)         //segunda passada
            if(a[i] > a[i+1])
            {
                hold = a[i];
                a[i] = a[i+1];
                a[i+1] = hold;
            }
    
    printf("\nItens de dados na ordem ascendente\n");

    for(i=0; i<=TAMANHO-1; i++)
        printf("%4d", a[i]);
    
    printf("\n");

    return 0;
}