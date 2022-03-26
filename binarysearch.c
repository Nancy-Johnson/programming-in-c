#include<stdio.h>
void binarysearch();
int a[20],n;
int main()
{
    binarysearch();
    return 0;
}
 void binarysearch ()
{
    int i,item,beg,end,mid,pos=-1;
    printf("enter the limit of the arrray");
    scanf("%d",&n);
    printf("enter elements");
    for (i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
 }    
    printf("\nARRAY\n");
    for (i=0;i<n;i++)
    {
    printf("%d\t",a[i]);
    }    
    printf("\nEnter the element to be search");
    scanf ("%d",&item);
    beg=0;
    end=n-1;
    while (beg<=end)
     {
         mid=(beg+end)/2;
         if (a[mid]==item)
         {
             pos=mid;
             printf("successfull search..%d found at location %d",item,pos+1);
             break;
             }
            else if (a[mid]>item)
                end=mid-1;
            else
                 beg=mid+1;
            }
    if (pos==-1)
        printf("unsuccessfull search !! value is not present in the array ");
   
}
