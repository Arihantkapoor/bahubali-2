//relational operators//
#include<stdio.h>
void main()
{
int a,b,c=0;

printf("enter a,b values \n");
scanf("%d%d",&a,&b);
c=(a>b);
printf("%d>%dis %d \n",a,b,c);
c=(a<b);
printf("%d<%dis %d \n",a,b,c);
c=(a>=b);
printf("%d>=%dis %d \n",a,b,c);
c=(a<=b);
printf("%d<=%dis %d \n",a,b,c);
c=(a!=b);
printf("%d!=%dis %d \n",a,b,c);
c=(a==b);
printf("%d==%dis %d \n",a,b,c);
c=(!(a>b));
printf("!(%d>%d)is %d\n",a,b,c);
c=(!(a==b));
printf("!(%d ==%d)is %d \n",a,b,c);


/*a<b
a>=b
a<=b
a!=b
!(a>b)
!(a!=b)*/

}

