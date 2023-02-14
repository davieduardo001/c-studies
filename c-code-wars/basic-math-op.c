int basic_op(char op, int value1, int value2) {
  int res=0;
  
  if(op=='+')
    res=value1+value2;
  else if(op=='-')
    res=value1-value2;
  else if(op=='*')
    res=value1*value2;
  else if(op=='/')
    res=value1/value2;
  
  return res;
}