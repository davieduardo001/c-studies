#include<stdio.h>
#include<stdlib.h>

//PROTOTIPOS DE FUNCOES
void a(void);
void b(void);
void c(void);

//VARIAVEIS GLOBAIS
int x = 1;

int main()
{   
    //VARIAVEL LOCAL PARA MAIN
    int x = 5;

    printf("x local no escopo externo de main eh %d\n", x);
    
    {
        int x = 7;
        printf("x local no escopo interno de main eh %d\n", x);
    }

    printf("x local no escopo externo de main eh %d\n", x);

    //a tem x local automatico
    a();
    //b tem x local estatico
    b();
    //c usa o x globa
    c();

    //a reinicializa o valor
    a();
    //b concerva o valor
    b();
    //c concerva o valor
    c();

    printf("x local em main eh %d\n", x);

    return 0;
}

void a(void)
{   
    int x = 25; //inicializa sempre que eh chamada
    printf("\nx local em a eh %d depois de entrar em a\n", x);
    ++x;
    printf("\nx local em a %d antes de sair de a\n", x);
}

void b(void)
{   
    //apenas inicializacao estatica
    static int x = 50;

    printf("\nx local estatico em b eh %d depois de entrar em c\n", x);
    ++x;
    printf("\nx local estatico em b eh %d antes de sair de c\n", x);
}

void c(void)
{   

    printf("\nx global em c eh %d depois de entrar em b\n", x);
    ++x;
    printf("\nx global em c eh %d antes de sair de b\n", x);
}