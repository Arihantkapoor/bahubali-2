#include<stdio.h>
void main()
{
int n,n1,r,total=0,min,max;
printf("enter the min and max\n");
scanf("%d%d",&min,&max);
for(n=(min+1);n<max;n++)
{
n1=n;                               
while(n1>0)                            
{
 r=n1%10;                          
total=total+(r*r*r);   
 n1=n1/10;                         
}
if(total==n)                            
{                                       
printf("%d\n",n);                                            
}                                                
total=0;
}
}

