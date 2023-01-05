#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
	FILE *arq01, *arq02;
	int let;
	
	if(argc!=5)
	{
		printf("\n%s: uso: %s <de> <para>", argv[0], argv[0]);
		exit(1);
	}
	
	printf("%d \n", argc);
	printf("\n %s %s %s %s %s", argv[0], argv[1], argv[2], argv[3], argv[4]);
	
	arq01=fopen(argv[1], "r");
	arq02=fopen(argv[2], "w");
	
	if(arq01==NULL || arq02==NULL)
	{
		printf("\nERROR - verifique novamente\n");
		exit(1);
	}
	
	while((let=getc(arq01))!=-1)
	putc(let,arq02);
}
