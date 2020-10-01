//Program to find the sum of even numbers and odd numbers form the given range
#include<stdio.h>
void main()
{
int i,min,max,odd=0,even=0;
printf("Enter the range\n");
scanf("%d%d",&min,&max);
for(i=min;i<=max;i++)
{
if(i%2==0)
{
even=even+i;
}
else
{
odd=odd+i;
}
}
printf("Sum of even numbers = %d\n",even);
printf("Sum of odd numbers = %d\n",odd);
}
