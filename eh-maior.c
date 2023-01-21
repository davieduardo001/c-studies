#include<stdio.h>

int main() {
    int n1, n2;

    printf("VALOR 1: ");
    scanf("%d", &n1);
    
    printf("VALOR 2: ");
    scanf("%d", &n2);

    if(n1 == n2)
        printf("os dois numeros sao iguais\n");
    else if(n1 > n2)
        printf("o maior numero eh: %d\n", n1);
    else
        printf("o maior numero eh o: %d\n", n2);

    return 0;
}