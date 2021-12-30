#include <stdio.h>

int main() {
  int n,sum=0,c,r,temp;
  printf("enter the number");
  scanf("%d",&n);
  temp=n;
  while(n>0){
    c=n%10;
    r=c*c*c;
    n=n/10;
    sum=sum+r;
  }
  if(sum==temp)
    printf("the given number is armstrong");
  else
    printf("the given number is not armstrong");

}