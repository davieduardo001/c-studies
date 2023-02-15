int nbYear(int p0, double percent, int aug, int p) {
    // your code
  int y = 0;
  percent/=100;
  
  while(p0 <= p)
  {
    p0 = p0 * percent + aug;
    y++;
  }
  
  return y;
}
