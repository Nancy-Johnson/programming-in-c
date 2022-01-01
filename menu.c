#include <stdio.h>

int main() {
  int ch,n,f=1,c=0;
  printf("***MENU****\n");
    while(ch<4){
  printf("\nENTER YOUR CHOICE\n1.factorial\n2.prime\n3.even or odd\n4.exist\n");
  scanf("%d",&ch);

    switch(ch){
      case 1:printf("enter the number\n");
        scanf("%d",&n);
      for(int i=1;i<=n;i++){
        f=f*i;
      }
      printf("\nfactorial number is %d",f);
      break;
      case 2:printf("enter the number\n");
         scanf("%d",&n);
      for(int i=1;i<=n;i++){
        if(n%i==0){
          c++;
        }
      }
      if(c==2){
        printf(" %d is a prime no.",n);
      }
      else
        printf("%d is not a prime no.",n);
      break;
      case 3:printf("enter the number\n");
         scanf("%d",&n);
      if(n%2==0)
        printf("%d is a even no.",n);
      else
        printf("%d is odd no.",n);
      break;
      case 4: printf("\nExist");
      break;
      }
    }
      
      
      
    }
  


  