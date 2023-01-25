#include <stddef.h>

void count_positives_sum_negatives(
  int *values, size_t count, int *positivesCount, int *negativesSum) 
{
  size_t i;
  int positives=0, negatives=0;
    for(i=0; i<count; i++)
      if(values[i]>0) positives++;
      else if(values[i]<0) negatives+=values[i];
  *positivesCount = positives;
  *negativesSum = negatives;
}  
