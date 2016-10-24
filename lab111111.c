#include <stdio.h>
#include <math.h>
int main()
{
  double a,b,c,x,y,z;
  printf("input three numbers\n");
  scanf("%lf %lf %lf",&a,&b,&c);
  x=b*b-4*a*c;
  if(x<0){
    x=fabs(x);
    x=sqrt(x);
    x=x/(2*a);
    z=-b/(2*a);
    y=x;
    printf("%lf + %lfi and %lf - %lfi \n",z,x,z,y);
  }else if(a==0){
    if((b==0)&&(c==0)){
    printf("anything works\n",x);
    }else{
      x=c/b;
      printf("%lf\n",x);
    }
  }else if(b==0){
    x=sqrt(c/a);
    printf("%lf\n",x);
  }else{
    x=sqrt(x);
    x=x/(2*a);
    z=-b/(2*a);
    y=x;
    x=z+y;
    y=z-y;
    printf("%lf and %lf\n",x,y);
  }
    }
