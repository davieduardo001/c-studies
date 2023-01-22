/*
    receba km dirigida e os litros
    usados para completar o tanque
    quantos km fez por litro
*/

#include<stdio.h>

int main()
{
    //VARIAVES
    float km, l, media, total, count;

    //PROCESSAMENTO
    while(l != -1)
    {
        printf("Entre com a quanitidade de litros usou (-1 para sair): ");
        scanf("%f", &l);

        if(l != -1){
            printf("Entre quantos km andou: ");
            scanf("%f", &km);

            media = km/l;

            printf("O carro fez %.2fkm/l\n", media);
            total += media;
            count++;    
        }
    }

    total /= count;
    //RETORNO
    printf("O carro esta fazendo %.2f por litro\n", total);

    return 0;
}