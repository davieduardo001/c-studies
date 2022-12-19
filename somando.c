//SOMANDO

#include <stdio.h> //arquivo de cabecalho chamado pelo pre-processador

int main()
{
	int int1, int2, soma; //sao considerados identificadores

	printf("entre com o primeiro numero inteiro:\n");
	scanf("%d", &int1);
	// %d -> string de controle de formato ou especificador de conversao
	// %d numero inteiro (decimal integer)

	// & -> operador de endereco
	// qual o local de memoria que a variavel esta armazenada?

	printf("entre com o segundo numero inteiro:\n");
	scanf("%d", &int2);

	soma = int1 + int2;

	// = -> operador de atribuicao
	printf("a soma é =  %d\n", soma);

	return 0; //status de saida para o OS
}