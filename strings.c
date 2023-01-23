#include<stdio.h>

int main()
{
    char string1[20], string2[] = "String literal";
    int i;

    printf("Entre com uma string: ");
    scanf("%s", string1);
    
    printf("string1 eh: %s\nstring2 eh: %s\n", string1, string2);

    printf("string1 com espaco entre os char eh: ");
    for(i=0; string1[i] != '\0'; i++)
        printf("%c", string1[i]);
    
    printf("\n");

    return 0;
}