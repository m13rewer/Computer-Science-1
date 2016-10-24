#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
  int w,x[7],i;
  double r;
  i=0;
  x[1]=x[2]=x[3]=x[4]=x[5]=x[6]=0;
  while(i<6000000){
    r=drand48();
    w=floor(r*6)+1;
    x[w]++;
    i++;
  }
  printf("%d\n", x[w]);
}
