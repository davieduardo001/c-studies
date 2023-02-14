#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

// return a *new, dynamically allocated* array with each element doubled.
int *maps(const int *arr, size_t size){
  size_t i;
  int *doubledArr=malloc(sizeof(int)*size);
  
  for(i=0; i<size; i++)
    doubledArr[i] = arr[i]*2;
  
  return doubledArr;
}

int main()
{
  int arr0[] = {1, 2, 3};

  printf("Return: %i\n", maps(arr0, sizeof(arr0)));
  return 0;
}