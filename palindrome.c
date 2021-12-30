#include <stdio.h>

int main() {
  int n,temp,c,sum=0;
  printf("enter the number: ");
  scanf("%d",&n);
  temp=n;
  while(n>0){
    c=n%10;
    n=n/10;
    sum=sum*10+c;
  }
  if(temp==sum)
    printf("%d is a palindrome number",sum);
  else
    printf("%d is not a palindrome number",temp);
  }
  