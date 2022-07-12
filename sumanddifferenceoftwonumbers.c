#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int d1, d2;
  float f1, f2;
  
  scanf("%d %d", &d1, &d2);
  scanf("%f %f", &f1, &f2);
  
  printf("%d %d\n", d1+d2, d1-d2);
  printf("%0.1f %0.1f\n", f1+f2, f1-f2);
  
  return 0;
}
