#include<stdio.h>
#include<math.h>

void main()
{
	float ca, cb, cc;
	float delta;
	float raiz1, raiz2;
	
	printf("##introduza os coeficientes de um polinomio de grau 2\n\n");
	printf("coeficiente a = ");
	scanf("%f", &ca);
	printf("coeficiente b = ");
	scanf("%f", &cb);
	printf("coeficiente c = ");
	scanf("%f", &cc);

	delta=(cb*cb-4*ca*cc);
	delta=sqrt(delta);
	raiz1=((-cb+delta) / (2*ca));
	raiz2=((-cb-delta) / (2*ca));

	printf("as raizes sao: S{%f, %f}\n", raiz1, raiz2);
}