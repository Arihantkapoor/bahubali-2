/* &&
||
!
d=(a==b)&&(a>c);
a>b*/
#include<stdio.h>
void main()
{
int a,b,c,d;
printf("enter a,b,c value \n");
scanf("%d%d%d",&a,&b,&c);
d=((a==b)&&(a>c));
printf("((%d==%d)&&(%d>%d))is%d",a,b,a,c,d);
}

