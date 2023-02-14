#include <stddef.h>

int sum_array(const int *values, size_t count){
  int res = 0;
  
  for(size_t i=0; i<count; i++)
    res+=values[i];
  
  return res;
}