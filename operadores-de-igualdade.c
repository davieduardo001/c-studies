//OPERADORES RELACIONAIS OU DE IGUALDADE

#include <stdio.h>

int main()
{
	int num1, num2;

	printf("entre com dois inteiros e lhe direi\n");
	printf("o relacionamento entre eles");
	scanf("%d%d", &num1, &num2);

	if(num1 == num2)
		printf("%d e igual a %d/n", num1, num2);

	if(num1 != num2)
		printf("%d nao e igual a %d", num1, num2);

	if(num1 < num2)
		printf("%d e menor que %d", num1, num2);

	if(num1 > num2)
		printf("%d e maior que %d", num1, num2);

	if(num1 <= num2)
		printf("%d e menor ou igual a %d", num1, num2);

	if(num1 >= num2)
		printf("%d e maior ou igual a %d", num1, num2);

	return 0;
}
