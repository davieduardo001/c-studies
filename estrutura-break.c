#include<stdio.h>

int main()
{
    int x;

    for(x=1; x<=10; x++)
    {
        if(x == 5)
            break; //sai do loop de cair nessa condicao

        printf("%d\n", x);
    }

    printf("SAIU DO PROGRAMA QUANDO X == %d\n", x);

    return 0;
}