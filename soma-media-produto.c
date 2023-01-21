/*
    ler 3 numeros
    retornar a soma, produto, media, qual eh o maior e qual o menor
*/

#include<stdio.h>

int main()
{
    int n1, n2, n3;
    int soma, produto, maior, menor, media;

    printf("ESCREVA 3 NUMEROS DIFERENTES: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    soma = n1+n2+n3;
    produto = n1*n2*n3;
    media = soma/3;
    
    if(n1 > n2 && n1 > n3)
        maior = n1;
    else if(n2 > n1 && n2 > n3)
        maior = n2;
    else
        maior = n3;

    if(n1 < n2 && n1 < n3)
        menor = n1;
    else if(n2 < n1 && n2 < n3)
        menor = n2;
    else
        menor = n3;


    printf("A soma eh: %d\n", soma);
    printf("O produto eh: %d\n", produto);
    printf("A media eh: %d\n", media);
    printf("O maior numero eh: %d\n", maior);
    printf("O menor numero eh: %d\n", menor);

    return 0;
}