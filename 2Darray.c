#include<stdio.h>
void main()
{
	int a[20][20],n,m,i,j;
	printf("Enter no. of rows and no. of columns:");
	scanf("%d%d",&n,&m);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix is: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{	
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
