#include<stdio.h>

void main()
{
	printf("\n%d e %d\n",125, -124);		//decimal inteiro com sinal
	
	printf("\n %f \n", -2123.1233);			//float por padrao 6n apos o . (.n => para definir a quantidade de decimal)		

	printf("\n %10.5f %10.5f \n", 123.12, 13.13);	//alinhamento 

	printf("\n %0010d", 15);			//10 chars COMPLETADO COM 0's
}
