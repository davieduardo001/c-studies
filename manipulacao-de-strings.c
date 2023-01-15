#include<stdio.h>
#include<string.h>
int main()
{
  char str1[80], str2[80];

  strcpy(str1, "teste");
  
  printf("string 1 = %s ", str1);

  //adiciona uma string com o valor passado no segundo parametro
  strcpy(str1, str2);

  printf("oi, %s.", str1);

  //compara as strings
  if(strcmp(str1, str2)==0)
    printf("sao identicas ;-;");
  
  return 0;
}
