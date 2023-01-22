#include<stdio.h>

int main()
{
    int x;

    for(x=1; x<=10; x++)
    {
        if(x == 5)
            continue; //retorna do inicio do loop (nao executando o resto)
        
        printf("%d ", x);
    }

    printf("\n continue usado para ignorar a impressao do valor 5\n");

    return 0;
}