#include <stdio.h>
#include <math.h>
int main()
{
  double a,b,c;
  printf("enter 2 numbers\n");
  scanf("%lf %lf", &a, &b);
  c=0;
  if(b<0 && a>0){
    a=a*(-1);
    b=b*(-1);
  }else if(b<0 && a<0){
    b=b*(-1);
    a=a*(-1);
  }
  while(b>=1){
    if(fmod(b,2)!=0){
      c=a+c;
      a=a*2;
      b=floor(b/2);
    }else{
      a=a*2;
      b=floor(b/2);
    }
  }
  printf("%lf\n", c);
}


