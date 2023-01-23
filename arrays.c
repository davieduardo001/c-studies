#include<stdio.h>

//CHAMADA DE FUNCOES
void inicializacaoComDeclaracao();

int main()
{
    int n[10], i;

    for(i=0; i<=9; i++)
        n[i] = 0;
    
    printf("%s%10s\n", "Elemento", "Valor");

    for(i=0; i<=9; i++)
        printf("%7d%10d\n", i, n[i]);
    
    inicializacaoComDeclaracao();

    return 0;
}

void inicializacaoComDeclaracao()
{   
    printf("VINDO DE DENTRO DA FUNCAO EXTERNA:\n");
    
    int i, n[10] = {13, 42, 432, 123, 12, 543, 65, 55, 53, 97};

    printf("%s%13s\n", "elemento", "valor");

    for(i=0; i<=9; i++)
        printf("%7d%13d\n", i, n[i]);
}