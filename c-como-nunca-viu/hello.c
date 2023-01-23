#include<stdio.h>

//FUNCTIONS PROTOTIPES
void f1(char []);
void f2(char []);

//MAIN
int main() {
    char hello[] = "hello world"; //array de chars
    char letra = hello[6];

    printf("%c\n", letra);
    printf("%s\n",hello);
    
    printf("from main: %d\n", &hello);
    f1(hello);

    return 0;
}


//FUNCTIONS
void f1(char hello[]) {
    printf("From f1: %d\n", &hello);
    f2(hello);
}

void f2(char hello[]) {
    printf("from f2: %d\n", &hello);
}