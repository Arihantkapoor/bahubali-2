#include<stdio.h>
main()
{
int a,b,c,n;
printf("enter values of a,b\n");
scanf("%d%d",&a,&b);
c=a&b;
printf("%d&%d is %d \n",a,b,c);
c=a|b;
printf("%d|%d is %d \n",a,b,c);
c=~a;
printf("~%d is %d \n",a,c);
printf("enter no of bits to be shifted");
scanf("%d",&n);
c=a>>n;
printf("%d>>%d is %d \n",a,n,c);
c=a<<n;
printf("%d<<%d is %d \n",a,n,c);
c=a^b;
printf("%d^%d is %d \n",a,b,c);
}




