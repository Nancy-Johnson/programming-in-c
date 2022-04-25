#include <stdio.h>
#define max 3

int queue[max],rear=-1,front=-1;
int display();
int insert();
int delete();

int main() {
int ch;
  do{
    printf("      MENU       \n1.display\n2.insert\n3.delete\n4.exit\nenter your choice : ");
    scanf("%d",&ch);
    switch(ch)
      {
        case 1 :display();
          break;
        case 2 :insert();
          break;
        case 3 :delete();
          break;
      }
  }while(ch!=4);
  return 0;
}
int display()
{
  if (front==-1 && rear==-1)
  {
    printf("\nno elements in the queue");}
  else{
    for(int i=front;i<=rear;i++)
      printf("%d\t",queue[i]);
  }
}
int insert()
{
  int item;
 
 
  if(rear==max-1){
    printf("\n\tqueue overflow");}
    else{
       printf("\nenter the element");
       scanf("%d",&item);
      if(rear==-1 && front==-1)
      {
        rear=0;
        front=0;
      }
      else{
    
        rear=rear+1;
    }
     queue[rear]=item; }
  return 0;
      }
  int delete()
    {
      int val;
      if(front==-1 || front>rear)
        printf("\nqueue underflow");
          else{
            val=queue[front];
             front++;
            printf("the deleted element is %d",val);
           
          }
    }
