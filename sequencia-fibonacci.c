#include<stdio.h>

//FIBONACCI, COMECA COM 0 E 1 E CADA NUMERO SUBSEQUENTE EH A SOMA DOS DOIS ULTIMOS

long fibonacci(long);

int main()
{
    long resultado, numero;

    printf("Entre com um inteiro: \n");
    scanf("%ld", &numero);

    resultado = fibonacci(numero);
    printf("Fibonacci(%ld) = %ld\n", numero, resultado);

    return 0;
}

//definicao de funcoes
long fibonacci(long n)
{
    if(n == 0 || n == 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}