#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
  int n,m;
  char a[50];
  printf("Please enter a word\n");
  scanf("%s",a);
  n=0;
  m=0;
  while(a[n]!=0){
    n=n+1;
  }
  if(n<=2){
    printf("This is not a palindrome\n");
  }else{
    n=n-1;
    while(a[m]==a[n]){
      m=m+1;
      n=n-1;
    }
    if(n-m>=2){
      printf("This is not a palindrome\n");
    }else{
      printf("This is a palindrome\n");
    }
  }
}
