#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double getHi(double x, double p)
{
  int i;
  double hi;

  hi = x;
  i = 1;
  if((floor(p) + 1) == 0){
    hi = 1;
  }
  while(i < (floor(p) + 1)){
    hi = hi * x;
    i++;
  }
  return hi;
}

double getLo(double x, double p)
{
  int i;
  double lo;
  
  lo = x;
  i = 1;
  if(floor(p) == 0){
    lo = 1;
  }
  while(i < floor(p)){
    lo = lo * x;
    i++;
  }
  return lo;
}

double mypower(double x, double p)
{
  double hi, lo, e, e1, e2, result;
  e1 = floor(p);
  e2 = floor(p) + 1;
  lo = getLo(x, p);
  hi = getHi(x, p);

  printf("e1 %lf e2 %lf lo %lf hi %lf\n", e1, e2, lo, hi);

  
  result = lo * hi;
  e = e1 + e2;
  if(e > p){
    hi = result;
  }
  if(e < p){
    lo = result;
  }
 
  printf("e1 %lf e2 %lf lo %lf hi %lf e %lf result %lf\n", e1, e2, lo, hi, e, result);

  while(e != p){

    printf("e1 %lf e2 %lf lo %lf hi %lf e %lf result %lf\n", e1, e2, lo, hi, e, result);

    if(e1 == 0){
      lo = 1;
    }
    if(e2 == 0){
      hi = 1;
    }
    if(e > p){

      printf("e1 %lf e2 %lf lo %lf hi %lf e %lf result %lf\n", e1, e2, lo, hi, e, result);

      hi = result;
      result = sqrt(lo) * sqrt(hi);
      e2 = e2 / 2;
      e = e1 + e2;
      printf("%lf\n", result);
    }
    if(e < p){

      printf("e1 %lf e2 %lf lo %lf hi %lf e %lf result %lf\n", e1, e2, lo, hi, e, result);

      lo = result;
      result = sqrt(lo) * sqrt(hi);
      e1 = e1 / 2;
      e = e1 + e2;
      printf("%lf\n" , result);
    }
    return result;

  }
 
}

int main()
{
  double p, x, result;

  scanf("%lf", &x);
  scanf("%lf", &p);
  result =  mypower(x, p);
  printf("%lf\n", result);
}
