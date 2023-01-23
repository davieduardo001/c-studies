#include<stdio.h>
#define TAMANHO 10

void classBubble(int *, int);

int main()
{
    int i, a[TAMANHO] = {1, 5, 231, 13, 432, 41, 31, 312, 23, 88};

    printf("Itens de dados na ordem original:\n");
    for(i=0; i<=TAMANHO-1; i++)
        printf("%4d", a[i]);

    classBubble(a, TAMANHO);

    printf("\nItens de dados em ordem acendente:\n");
    for(i=0; i<=TAMANHO-1; i++)
        printf("%4d", a[i]);

    printf("\n");

    return 0;
}

void classBubble(int *array, int tamanho)
{
    int pass, j;
    void swap(int *, int *);

    for(pass=1; pass<=tamanho-1; pass++)
        for(j=0; j<=tamanho-2; j++)
            if(array[j] > array[j+1])
                swap(&array[j], &array[j+1]);
}

void swap(int *elemento1Ptr, int *elemento2Ptr)
{
    int temp;

    temp = *elemento1Ptr;
    *elemento1Ptr = *elemento2Ptr;
    *elemento2Ptr = temp;
}