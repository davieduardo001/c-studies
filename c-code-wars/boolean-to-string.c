#include <stdbool.h>

//The returned string should be statically allocated and it won't be freed
const char *boolean_to_string(bool b)
{
    char *res;
    
    if(b==false)
      res="false";
    else
      res="true";
  
    return res; // your code here
}