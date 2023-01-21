#include<stdio.h>

int main()
{
  int *ptr, var, var1;
  var = 200;
  printf("var = %d\n", var);
  
  ptr = &var; //o ponteiro recebe o endereco de memoria da var
  printf("ptr com & = %d\n", &ptr); //retorna o endereco de memoria
  printf("ptr com * = %d\n", *ptr); //retorna o que tem no endereco de memoria
  
  var1 = *ptr; //var 1 recebe o valor do endereco de memoria do ponteiro
  printf("var 1 = %d\n", var1);
}
