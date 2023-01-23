#include<stdio.h>

void imprimirCacacteres(const char *);

int main()
{   
    char string[] = "imprime os chars de uma string";

    printf("A string eh:\n");
    imprimirCacacteres(string);
    putchar('\n');

    return 0;
}

void imprimirCacacteres(const char *s)
{
    for(; *s!='\0'; s++)
        putchar(*s);
}