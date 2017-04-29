#include<stdio.h>
void main()
{
int n,n1,r,total=0;
printf("enter the number to be checked \n");
scanf("%d",&n);
n1=n;                    //Iteration 1:              
while(n1>0)         // n1=407                        
{
 r=n1%10;            //r=407 % 10 = 7               
total=total+(r*r*r); // total= 0 + (7* 7* 7)=343   
 n1=n1/10;           // n1= 407/10=  40                 
}
if(total==n)                             //Iteration: 3
{                                          // n1=4 
                                             // r=4%10=4
printf("Given number is Arm Strong");                              // total=343+(4 * 4*4)
}                                                 total=407
else
{
printf("false"); 
}
}/*  
 n=153
     
n1=153  TOTAL=0



  (n1>0)=true        153>0
   r=153%10=3         r=3
   TOTAL=0+(3*3*3)   TOTAL=27
    n1=153/10=15    n1=15


    (n1>0)=true          15>0
     r=15%10=5           r=5
     TOTAL=27+(5*5*5)    TOTAL=152
      n1=15/10=1        n1=1

     (n1>0)=true          1>0
      r=1%10=1            r=1
      TOTAL=152+(1*1*1)    TOTAL=153
       n1=1/10         n1=0

     (n1>0) = FALSE    0!>0 LOOP TERMINATES
if(n==total)=true   153==153 is true
   
