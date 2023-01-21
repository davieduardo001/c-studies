#include<stdio.h>

int main()
{
    //VARIAVEIS
    float media;
    int contador, grau, total;

    //INICIALIZACAO
    contador = 0;
    total = 0;

    //PROCESSAMENTO
    printf("Entre com o grau, -1 para finalizar: ");
    scanf("%d", &grau);

    while(grau != -1) {
        total = total + grau;
        contador = contador + 1;
        printf("Entre com um grau, -1 para finalizar: ");
        scanf("%d", &grau);
    }

    //RETORNO
    if(contador != 0) {
        media = (float) total / contador; //conversao explicita
        printf("A media da turma eh %.2f\n", media); //.2 especifica a precisao desse tipo float default eh 6
    }
    else
        printf("Nenhum grau foi fornecido.\n");
    
    return 0;
}