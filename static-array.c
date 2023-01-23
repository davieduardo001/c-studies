#include<stdio.h>

void staticaArray();
void automaticaArray();

int main()
{
    printf("Primeira chamada de cada funcao:\n");
    staticaArray();
    automaticaArray();

    printf("\n\nSegunda chamada de cada funcao:\n");
    staticaArray();
    automaticaArray();

    return 0;
}

void staticaArray()
{
    static int a[3];
    int i;

    printf("\nValores de staticArrayInit ao entrar: \n");

    for(i=0; i<=2; i++)
        printf("array1[%d] = %d ", i, a[i]);

    printf("\nValores de staticArrayInit ao sair:\n");

    for(i=0; i<=2; i++)
        printf("array[%d] = [%d] ", i, a[i]+=5);
}

void automaticaArray()
{
    int a[3] = {1, 2, 3};
    int i;

    printf("\n\nValores de automaticaArrayInit ao entrar:\n");

    for(i=0; i<=2; i++)
        printf("array1[%d] = %d ", i, a[i]);

    printf("\nValores de automaticaArrayInit ao sair:\n");
    
    for(i=0; i<=2; i++)
        printf("array1[%d] = %d ", i, a[i]+=5);
}