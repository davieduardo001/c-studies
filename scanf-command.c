#include<stdio.h>

//scanf("controle", argumentos) => onde o controle controlara a entrada do comando
/*
	para "escanear a linha de comando" colocasse
	%NUMERO-PARA-ESPECIFICAR-O-TAMENHO-DO-COMANDO+caractere(opcional)
	%caractere
	*
*/

void main()
{	
	char car;
	int num1, num2;

	printf("entre com um caractere qualquer: ");
	scanf("%c", &car); 				//& => especifica o local da memoria daquela variavel
	printf("o caracterer %c tem o codigo ascii igua a %d\n", car, car);
	
	printf("entre com 2 inteiros separados por virgula: ");
	scanf("%d, %d", &num1, &num2);
	printf("os dois numeros multiplicados sao igual a: %d\n", num1*num2);
}
