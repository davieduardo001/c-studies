#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<inttypes.h>

struct Person {
    char nome[10];
    uint8_t age;
    uint8_t height;
};

void main() {
    struct Person person;
    strcpy(person.nome, "Davi");
    person.age = 18;
    person.height = 180;

    printf("%x\n", &person);

    return;
}