#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

size_t count_sheep(const bool *, size_t);

int main()
{
    const bool sheep[] = {
      true,  true,  true,  false,
      true,  true,  true,  true,
      true,  false, true,  false,
      true,  false, false, true,
      true,  true,  true,  true,
      false, false, true,  true
    };

    printf("the total of sheeps are: %i", count_sheep(sheep, 24));
}

size_t count_sheep(const bool *sheep, size_t count)
{
  int number, i;
  
  for(i=0; i<count; i++)
    if(sheep[i]==true)
      number++;
  
  return number;  
}