#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *dna_to_rna(const char *dna)
{
    int len = strlen(dna);
    char *rna = malloc(len+1);

    for (int i = 0; i<len; i++)
        if(dna[i]=='T')
            rna[i] = 'U';
        else
            rna[i] = dna[i];
    
    return rna;
}


int main()
{
    const char *DNA="TGCCTTT";
    
    printf("the DNA %s\nthe RNA %s\n", DNA, dna_to_rna(DNA));
    return 0;
}