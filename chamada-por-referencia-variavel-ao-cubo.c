#include<stdio.h>

void cuboPorReferencia(int *);

int main()
{
    int numero = 5;
    printf("O valor original do numero eh %d\n", numero);
    cuboPorReferencia(&numero);
    printf("O novo valor do numero eh: %d\n\n", numero);
    return 0;
}

void cuboPorReferencia(int *nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr; 
}