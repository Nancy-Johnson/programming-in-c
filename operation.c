#include<stdio.h>
void main()
{
    int a,b,result;
    char ch;
    printf("enter two integer");
    scanf("%d%d",&a,&b);
    printf("+\n*\n-\n/\n%\nEnter your choice:");
    scanf("%s",&ch);
    switch(ch){
        case '+':result=a+b;
                printf("\nsum=%d",result);
                break;
        case '*':result=a*b;
                printf("\nmultiplication=%d",result);
                break;
        case '-':result=a-b;
                printf("\nsubtraction=%d",result);
                break;
        case '/':result=a/b;
                printf("\ndivision=%d",result);
                break;
        case '%':result=a%b;
                printf("\nmodulus=%d",result);
                break;
        default:printf("invalid input");
                break;
    }
    return 0;

}