#include<stdio.h>

/*
    pode-se dizer que arrays sao ponteiros constantes.
    ou seja:
    bPtr = &array[0] == bPtr = array
    array[3] == *(bPtr+3) == bPtr[3] == *(array+3)
*/

void main()
{
    int i, offset, b[] = {10, 20, 30, 40};
    int *bPtr = b; //bptr aponta para b

    printf("array b impresso com:\nNotacao de subscrito de array\n");
    for(i=0; i<=3; i++)
        printf("b[%d] = %d\n", i, b[i]);

    printf("Notacao com ponteiro/offset em que\no ponteiro eh o nome do array\n");
    for(offset=0; offset<=3; offset++)
        printf("*(b+%d) = %d\n", offset, *(b+offset));

    printf("notacao com subscrito de ponteiro: ");
    for(i=0; i<=3; i++)
        printf("bPtr[%d] = %d\n", i, bPtr[i]);

    printf("NOtacao com ponteiro offset: ");
    for(offset=0; offset<=3; offset++)
        printf("*(bPtr+%d) = %d\n", offset, *(bPtr+offset));   c
}