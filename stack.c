#include <stdio.h>
#define max 10
int top=-1,stack[max];
int push();
int pop();
int peek();
int display();

int main() {
    int ch;
      do{
  printf("****** MENU *******\n1.push\n2.pop\n3.peek\n4.display\n5.exist\n");
  printf("enter your choice : ");
  scanf("%d",&ch);

    switch(ch)
      {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        }
    }while(ch!=5);
    return 0;
}
  int push()
  {
    int item;
    if(top==max-1){
      printf("\nOVERFLOW\n");}
    else{
      printf("enter the element\n");
      scanf("%d",&item);
       top=top+1;
      stack[top]=item;
   
      return 0;
 }
    }
  int pop()
  {
    int val;
    if(top==-1){
      printf("UNDERFLOW\n");}
    else 
    {
     
      val=stack[top];
       top=top-1;
      printf("popped element is %d\n",val);
      return 0;
    }
    }
    int peek()
    {
        int val;
      if(top==-1){
        printf("THE STACK IS EMPTY\n");}
      else{
          val=stack[top];
        printf("THE TOP ELEMENT IS %d\n",stack[top]);
    }}
        int display()
{ 
     int i; 
    if(top==-1) 
        printf("STACK IS EMPTY!!"); 
else 
{ 
        printf("*** STACK ***\n"); 
    for(i=0;i<=top;i++) 
{ 
         printf("%d\t", stack[i]); 
 } 

      return 0;
    }
  }
