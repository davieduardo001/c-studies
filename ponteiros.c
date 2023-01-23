#include<stdio.h>

/*
    PONTEIROS SAO VARIAVEIS QUE RECEBEL ENDERECOS DE MEMORIA COMO VALOR, E ESSE 
    ENDERECO DE MEMORIA EH DE UMA VARIAVEL.
    -> variavel faz refencia direta a um valor
    -> o ponteiro faz uma referencia indireta
*/

//USANDO * E &

int main()
{
    int a;
    int *aPtr;

    a = 7;
    aPtr = &a; //endereco de a (o ponteiro aponta para a (ou o endereco de a))

    printf("O endereco de a eh: %p\nO valor de *aPtr eh %p\n\n", &a, aPtr);

    printf("O valor de a eh: %d\nO valor de *aPtr eh %d\n\n", a, *aPtr);

    printf("Sabendo que * e & complementam-se mutuamente.\n&*aPtr = %p\n*&aPtr = %p\n", &*aPtr, *&aPtr);

    return 0;
}