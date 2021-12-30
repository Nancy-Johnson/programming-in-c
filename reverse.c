#include <stdio.h>

int main() {
  int n,c,sum=0;
  printf("enter the number: ");
  scanf("%d",&n);
  while(n>0){
    c=n%10;
    n=n/10;
    sum=(sum*10)+c; 
  }
  
  printf("reverse of the number = %d",sum);
  
}
  