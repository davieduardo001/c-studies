#include<stdio.h>

//O nome de uma array e o mesmo do primeiro endereco de memoria que ela possuir

int main()
{
    char array[5];

    printf("    array = %p\n&array[0] = %p\n", array, &array[0]);
    return 0;
}