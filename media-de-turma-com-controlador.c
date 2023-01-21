#include<stdio.h>

int main()
{
    //VARIAVEIS
    int contador, grau, total, media;

    //INICIALIZACAO
    total = 0;
    contador = 1;

    //PROCESSAMENTO
    while(contador <= 10) {
        printf("Entre com um grau: ");
        scanf("%d", &grau);
        total = total + grau;
        contador = contador + 1;
    }

    media = total / 10;

    //RETORNO
    printf("A media de uma turma eh %d\n", media); 

    return 0; //indica que o programa terminou corretamente
}