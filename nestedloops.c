#include <stdio.h>
#include <math.h>
int main()
{
  int n,c,r;
  printf("enter whole number\n");
  scanf("%d", &n);
  r=0;
  while(r<n){
    while(c<n){
      printf("+");
      c++;
    }
    printf("\n");
    r++;
  }
