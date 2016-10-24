#include <stdio.h>
#include <math.h>
int main()
{
  int n,m;
  char a[100],b[100],c[100];
  printf("enter first word\n");
  scanf("%s", a);
  printf("enter second word\n");
  scanf("%s", b);
  n=0;
  while(a[n]!='\0'){
    c[n]=a[n];
    n=n+1;
  }
  m=0;
  while(b[m]!='\0'){
    c[n]=b[m];
    m=m+1;
    n=n+1;
  }
  c[n]='\0';
  printf("%s\n", c);
}
