#include<stdio.h>

int cuboPorValor(int);

int main()
{
    int numero = 5;

    printf("O valor original do numero eh: %d\n", numero);
    numero = cuboPorValor(numero);
    printf("O novo vaor do numero eh: %d\n", numero);

    return 0;
}

int cuboPorValor(int i)
{
    return n*n*n;
}