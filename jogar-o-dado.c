#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAMANHO 7

int main()
{
    int face, jogada, frequencia[TAMANHO] = {0};

    srand(time(NULL));

    for(jogada=1; jogada<=6000; jogada++)
    {
        face = rand() % 6 + 1;
        ++frequencia[face];
    }

    printf("%s%18s\n", "face", "frequencia");

    for(face=1; face<=TAMANHO-1; face++)
        printf("%4d%18d\n", face, frequencia[face]);
    
    return 0;
}