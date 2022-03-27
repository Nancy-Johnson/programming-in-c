#include <stdio.h>

void create();
void display();
void insert();
void delete();
int a[20],n;

int main() {
    int ch;
   do{
  printf("\n1.create\n2.display\n3.insert\n4.delete\n5.exit");
  printf("\nenter your choice ");
  scanf("%d",&ch);
 
  switch(ch){
    case 1: create();
            break;
    case 2: display();
            break;
    case 3: insert();
            break;
    case 4: delete();
            break;
    case 5: exit(0);
            break;
  }
    }while(ch!=5);
  return 0;
}
void create()
{
  int i;
  printf("\nenter the size of array");
  scanf("%d",&n);
  printf("\nenter the elements");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("\nARRAY CREATED");
  
}
void display()
{
  int i;
  printf("\nthe arrays are: ");
  for(i=0;i<n;i++)
    printf("%d\t",a[i]);
  }
void insert()
{
  int item,pos,i;
  i=n;
  printf("\nenter the position you want to insert");
  scanf("%d",&pos);
  printf("\nenter the element");
  scanf("%d",&item);
  while(pos<=i){
    a[i+1]=a[i];
    i=i-1;
  }
  n=n+1;
a[pos]=item;
printf("\n new ITEM inserted ");
  }
void delete()
  {
    int item,pos,i;
    printf("\nenter the position you want to delete ");
    scanf("%d",&pos);
    i=pos;
    while(i<=n-1){
      a[i]=a[i+1];
      i=i+1;
      }
    n=n-1;
    printf("the element is DELETED ");
    
    }
