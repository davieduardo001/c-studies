#include<stdio.h>

// char *naipe[4] = {"Copas", "Ouros", "Paus", "Espadas"}

void copy1(char *, const char *);
void copy2(char *, const char *);

void main()
{
    char string1[10], *string2="hello",
         string3[10], string4[]="good bye";

    copy1(string1, string2);
    printf("string1 = %s\n", string1);

    copy2(string3, string4);
    printf("string3 = %s\n", string3);
}

void copy1(char *s1, const char *s2)
{
    int i;

    for(i=0; s1[i]=s2[i]; i++)
        ; //nada eh feito
}

void copy2(char *s1, const char *s2)
{
    for (; *s1 = *s2; s1++, s2++)
        ; //nada eh feito
}