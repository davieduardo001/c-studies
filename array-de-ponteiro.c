#include<stdio.h>

void func1(int);
void func2(int);
void func3(int);

int main()
{
    void (*f[3])(int) = {func1, func2, func3};
    int opcao;

    printf("Digite um numero entre 0 e 2, 3 para finalizar: ");
    scanf("%d", &opcao);

    while(opcao>=0 && opcao<3){
        (*f[opcao])(opcao);
        printf("Digite um numero entre 0 e 2, 3 para finalizar");
        scanf("%d", &opcao);
    }
    printf("Voce digitou 3 para finalizar\n");

    return 0;
}

void func1(int a)
{
    printf("Voce digitou %d e funcao foi chamada\n\n", a);
}

void func2(int a)
{
    printf("Voce digitou %d e funcao foi chamada\n\n", a);
}

void func3(int a)
{
    printf("Voce digitou %d e funcao foi chamada\n\n", a);
}