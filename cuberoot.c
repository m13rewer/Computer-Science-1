#include <stdlib.h>
#include <math.h>
#include <stdio.h>
int main()
{
  double x, g;
  int i;
  printf("enter a guess for the cube root then the number whose cube root you want to find\n");
  scanf("%lf %lf", &g, &x);
  for(i=1; i<=10; i++){
    g=(2.0*g + x/(g*g))/3.0;
    printf("%lf %lf\n", g, cbrt(x));
  }
}
