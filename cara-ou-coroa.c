#include<stdio.h>
#include<stdlib.h>

int main()
{
    //VARIAVEIS
    int moeda, i;

    printf("CARA OU COROA? \n");

    moeda = 1 + (rand() % 2);

    for(i=1; i<=10; i++)
        printf("resultado: %d\n", 1+(rand()%2));

    if(moeda == 1)
        printf("Deu cara!\n");
    else
        printf("Deu cara!\n");

    return 0;
}