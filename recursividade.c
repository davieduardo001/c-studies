#include<stdio.h>

long fatorial(long);

int main()
{
    int i;

    for(i=1; i<=10; i++)
        printf("%2d! = %ld\n", i, fatorial(i));
    
    return 0;
}

// definicao de resursividade:
long fatorial(long numero)
{
    if(numero <= 1)
        return 1;
    else
        return(numero * fatorial(numero-1));
}