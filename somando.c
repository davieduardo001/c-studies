#include<stdio.h>

int main()
{
	int n1, n2, soma;

	printf("\nDIGITE O PRIMEIRO NUMERO: ");
	scanf("%d", &n1); //OPERADOR DE ENDERECO
	
	printf("\nDIGITE O SEGUNDO NUMERO:");
	scanf("%d", &n2);

	soma = n1 + n2;

	printf("\nA soma eh: %d\n", soma);

	return 0;
}