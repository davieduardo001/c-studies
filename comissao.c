#include<stdio.h>

int main()
{
    //VARIAVEIS
    float salario, vendas;

    //PROCESSAMENTO
    printf("Entre com o total de vendas: ");
    scanf("%f", &vendas);

    salario = 200 + ((vendas*9)/100);
    
    //RETORNO
    printf("O salario dessa semana eh: %.2f\n", salario);
}