#include<stdio.h>
#include<stdlib.h>


//rand() % 6 (retorna de 0 a 5)
//rand() % 2 (retorna de 0 a 2)
//1+(rand()) % 7 (retorna de 1 a 7)
//...

int main()
{
    int i;

    for(i=1; i<=20; i++)
    {
        printf("%10d", 1 + (rand() % 6));

        if(i%5 == 0)
            printf("\n");
    }
    return 0;
}