#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
  int a[100],b[100],c[100];
  int l,m,n,z;
  z=0;
  l=m=1;
  n=0;
  printf("enter a positive numbers followed by -1\n");
  while(a[l]>=0){
    scanf("%d",&a[l]);
    l++;
  }
  l=l-1;
 
