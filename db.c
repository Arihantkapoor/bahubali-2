#include<stdio.h>

void main()
{
   int binary=0,quotient, remainder, number,i=1;
   
   printf("Enter the decimal number\n");
   scanf("%d",&number);
   quotient = number; 
   while(quotient !=0)                         
   {
          remainder = quotient % 2;       
          quotient = quotient/2;               
          binary=binary+remainder*i; 
          i= i* 10;                                       
   }
   printf("The binary value is %d",binary);
}
