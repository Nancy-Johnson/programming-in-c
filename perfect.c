#include<stdio.h>
void main()
{
  int n,c,sum=0;
  printf("enter a number");
  scanf("%d",&n);
  for(c=1;c<n;c++){
    if(n%c==0){
      sum=sum+c;
    }
  }
  if(sum==n){
    printf("%d is perfect number",n);
  }
  else{
    printf("%d is not a perfect number",n);
  }
}