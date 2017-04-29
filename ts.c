#include<stdio.h>
void main()
{
	int a[10][10],r[10][10],i,j,count=0,n,m;
	printf("enter order of matrix \n");
	scanf("%d%d",&n,&m);
	printf("enter matrix elements \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
 			scanf("%d",&a[i][j]);
		}
	}
	printf("the entered matrix elements \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
 			printf("%d \t",a[i][j]);
		}
                printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
 		 r[i][j]=a[j][i];	
		}
	}
	printf("the result transpose matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
 			printf("%d \t",r[i][j]);
		}
                printf("\n");
	}
}
      
     

