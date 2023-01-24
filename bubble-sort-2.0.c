#include<stdio.h>
#define SIZE 10

void bolha(int *, const int, int (*)(int, int));
int ascendente(const int, const int);
int descendente(const int, const int);
void swap(int *, int *);

int main()
{
    int a[SIZE] = {2, 43, 53, 645, 65, 12, 32, 1, 32, 5};
    int contador, ordem;

    printf("Digite 1 para colocar na ordem ascendente, \n");
    printf("Digite 2 para colocar na ordem ascendente: ");
    scanf("%d", &ordem);

    printf("\nItens de dados na ordem original\n");
    for(contador=0; contador<=SIZE-1; contador++)
        printf("%4d", a[contador]);
    
    if(ordem==1) {
        bolha(a, SIZE, ascendente);
        printf("\nItens de dados na ordem ascendente\n");
    } else {
        bolha(a, SIZE, descendente);
        printf("\nItens de dados na ordem descendente\n");
    }

    for(contador=0; contador<=SIZE-1; contador++)
        printf("%4d", a[contador]);

    printf("\n");

    return 0;
}

//FUNCTIONS
void bolha(int *work, const int tamanho, int (*compare)(int, int))
{
    int pass, count;

    for(pass = 1; pass<=tamanho-1; count++)
        for(count=0; pass<=tamanho-2; count++)
            if((*compare)(work[count], work[count+1]))
                swap(&work[count], &work[count+1]);
}

void swap(int *elemento1Ptr, int *elemento2Ptr)
{
    int temp;

    temp=*elemento1Ptr;
    *elemento1Ptr = *elemento2Ptr;
    *elemento2Ptr = temp;
}

int ascendente(const int a, const int b)
{
    return b<a;
}

int descendente(const int a, const int b)
{
    return b>a;
}