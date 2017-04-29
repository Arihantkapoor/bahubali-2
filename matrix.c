#include<stdio.h>
void main()
{
int a[20],i,n,x,count=0;
printf("enter  total no elements in array \n");
scanf("%d",&n);
printf("enter array elements \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the element to be searched \n");
scanf("%d",&x);
for(i=0;i<n;i++)
{
if(x==a[i])
{
printf("element is found at position a[%d] \n",i);
break;
}
else
{
count=count+1;
}
}
if(count>=n)
{
printf("element notfound\n");
}
}

