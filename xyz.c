#include<stdio.h>
void main()
{
int num,temp,rem,sum=0;
printf("Enter the number\n");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
 rem=temp%10;
 sum=sum+rem;
 temp=temp/10;
}
printf("sum of individual digits in the given no = %d",sum);
}

