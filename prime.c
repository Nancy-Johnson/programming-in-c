#include <stdio.h>

int main() {
  int n,c=0;
  printf("enter the number: ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    if(n%i==0){
      c++; 
  }
    }
  if(c==2)
    printf("%d is a prime number",n);
  
  else
    printf("%d is not a prime number",n);
}
  