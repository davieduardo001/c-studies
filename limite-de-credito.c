#include<stdio.h>

int main()
{
    int conta;
    float saldoDevedor, 
            cobrancas, 
            aplicados, 
            creditoPermitido;

    while(conta != -1)
    {
        printf("Entre com o numero da conta: ");
        scanf("%d", &conta);

        if(conta != -1)
        {
            printf("Saldo devedor inicial: ");
            scanf("%f", &saldoDevedor);

            printf("Entre com os gastos: ");
            scanf("%f", &cobrancas);

            printf("Entre com quanto aplicou na conta: ");
            scanf("%f", &aplicados);

            printf("Entre com o limite de credito do cartao: ");
            scanf("%f", &creditoPermitido);

            saldoDevedor = saldoDevedor+cobrancas - (aplicados+creditoPermitido);

            //RETORNO
            printf("Conta: %d\n", conta);
            printf("Creditos: %.2f\n", aplicados+creditoPermitido);
            if(saldoDevedor > 0){
                printf("Saldo devedor: %.2f\n", saldoDevedor);
                printf("Limite de credito exedido\n");
            }
            else
                printf("Saldo ok.\n");
        }
    }

    return 0;
}