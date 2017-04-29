#include<stdio.h>
void main()
{
int n,n1,rem,rev=0;
printf("enter the number to be checked \n");
scanf("%d",&n);//121
n1=n;//121
  while(n1>0)//121>0 //12>0
   {
printf("while\n");
     rem = n1%10;//121%10=1 //12%10=2 //1%10=1
     rev=(rev*10)+rem;//1  //12 //121
      n1=n1/10;//121/10=12 //12/10=1 //1/10=0
    }
   if(rev==n)
    {
       printf("GIVEN NUMBER IS PALINDROME : %d",rev);
    }
    else
    {
     printf("Not Palindrome"); 
     }
}
