#include<string.h>
#include<stdio.h>
#include<stdlib.h>

char *double_char (const char *string, char *doubled)
{
  int a=0, b=0;
  int len=strlen(string);
  //*doubled='\0';
  doubled=malloc(len*2+1);

  while(string[b]!='\0')
  {
    doubled[a]=string[b];
    doubled[a+=2]=string[b++];
  }

  doubled[len*2+1]='\0';

  return doubled;
}

int main()
{
    char *doub="test";
    const char *str="abcd";
    printf("String: %s\n", double_char(str, doub));

    return 0;
}