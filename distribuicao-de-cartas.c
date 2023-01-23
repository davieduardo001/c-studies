#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//FUNCTIONS PROTOTYPES
void embaralhar(int [][13]);
void distribuir(const int [][13], const char *[], const char *[]);

//MAIN
int main()
{
    char *naipe[4] = {"copas", "ouros", "paus", "espadas"};
    char *face[13] = {"as", "dois", "tres", "quatro", "cinco", "seis",
                     "sete", "oito", "nove", "dez", "valete", "damas", "rei"};
    
    int baralho[4][13] = {0};

    srand(time(NULL));

    embaralhar(baralho);
    distribuir(baralho, face, naipe);

    return 0;
}

//FUNCTIONS
void embaralhar(int wBaralho[][13])
{
    int carta, linha, coluna;

    for(carta=1; carta<=52; carta++){
        linha = rand() % 4;
        coluna = rand() % 13;

        while(wBaralho[linha][coluna] != 0){
            linha = rand() % 4;
            coluna = rand() % 13;
        }

        wBaralho[linha][coluna] = carta;
    }
}

void distribuir(const int wBaralho[][13], const char *wFace[], const char *wNaipe[])
{
    int carta, linha, coluna;

    for(carta=1; carta<=52; carta++)
        for(linha=0; coluna<=3; linha++)
            if(wBaralho[linha][coluna]==carta)
                printf("%6s de %-7s%c", wFace[coluna], wNaipe[linha], carta%2==0 ? '\n' : '\t');
}