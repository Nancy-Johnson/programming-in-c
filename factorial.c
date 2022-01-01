#include <stdio.h>

int main() {
    int n,r=1;
  printf("enter the number");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    r=r*i;
  }
  printf("%d",r);
}