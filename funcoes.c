#include<stdio.h>

//UMA FUNCAO NAO PODE SER ESCRITA NO INTERIOR DE OUTRA FUNCAO!!

//int square(int);
int square(int y)
{
    return y * y;
}

int main()
{
    int x;
    
    for(x=1; x<=10; x++)
        printf("%d ", square(x));
    printf("\n");

    return 0;
}


/*
int square(int y)
{
    return y * y;
}
*/