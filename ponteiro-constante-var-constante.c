#include<stdio.h>

void converterParaUpper();

int main()
{
    char string[] = "characteres";

    printf("A string antes da conversao: %s\n", string);
    converterParaUpper(string);
    printf("A string deopis da conversao eh: %s\n", string);

    return 0;
}

void converterParaUpper(char *s)
{
    while(*s != '\0')
    {
        if(*s>='a' && *s<='z')
            *s -= 32;
        ++s;
    }
}