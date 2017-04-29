/*GCD of 2 numbers using recursion  */

#include<stdio.h>
main()
{
   int a,b,gcd1,lcm1;
   printf("enter 2 numbers");
   scanf("%d%d",&a,&b);
   gcd1=gcd(a,b);
   lcm1=lcm(a,b);
   printf("the GCD:%d\n",gcd1);
   printf("the LCM:%d\n",lcm1);   
}

  int gcd(int a,int b)
  {
    if(a%b==0)
     return b;
     else
      return gcd(b,a%b);
   } 
  int lcm(int a,int b)
   {
     static int c=1;
      if(c%a==0 && c%b==0)
       return c;
     c++;
      lcm(a,b);
    }
