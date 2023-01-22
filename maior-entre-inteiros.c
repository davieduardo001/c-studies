#include<stdio.h>

//PROTOTIPO DE FUNCAO (SERVE PARA O COMPILADOR CONSEGUIR ENCONTRAR OS ERROS MAIS FACILMENTE)
//faz tambem as regras de promocao
int maximum(int , int, int);

int main()
{
    int a, b, c;
    printf("entre com 3 inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("o maior eh: %d\n", maximum(a, b, c));
}

int maximum(int x, int y, int z)
{
    int max = x;

    if(y > max)
        max = y;
    
    if(z > max)
        max = z;

    return max;
}