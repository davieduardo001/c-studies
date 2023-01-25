#include<stdio.h>
#include<stdlib.h>

int main()
{   
    char *str = "124";
    
    printf("the original number in string is: %s\n", str);
    
    printf("the result is: %i\n", atoi(str));

    return 0;
}