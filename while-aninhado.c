#include<stdio.h>

int main()
{
    //VARIAVEIS
    int aprovacoes = 0, reprovacoes = 0, aluno = 1, resultado;

    //PROCESSAMENTO
    while(aluno<=10)
    {
        printf("Entre com o resultado do aluno: ");
        scanf("%d", &resultado);

        if(resultado == 1)
            aprovacoes++;
        else
            reprovacoes += 1;

        aluno += 1;
    }

    //RETORNO
    printf("Aprovados %d\n", aprovacoes);
    printf("Reprovacoes %d\n", reprovacoes);

    if (aprovacoes > 8)
        printf("Cobrar taxa!\n");
    
    return 0;
}