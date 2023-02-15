#include <stddef.h>
#include <stdlib.h>

long sum_two_smallest_numbers(size_t n, const int numbers[n]) {

    //  <----  hajime!
    size_t i, pass, hold;
    int res;
    int *a = malloc(n);
    
    for(i=0; i<n; i++)
      a[i] = numbers[i];
  
    for(pass=1; pass<=n-1; pass++)
      for(i=0; i<=n-2; i++)
        if(a[i]>a[i+1]){
          hold = a[i];
          a[i] = a[i+1];
          a[i+1] = hold;
        }
    res = a[0]+a[1];
  
    return res;
}
