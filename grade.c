#include <stdio.h>
main()
{
int a,b,c,d,e,f;
float t;
printf("enter your marks in english,maths,physics,chemistry,es \n");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
f=a+b+c+d+e;
if(a>40&&b>40&&c>40&&d>40&&e>40)
{
t=f*100/500.0;
printf("your percentage is %f \n",t);
if(t>90)
{
printf(" you got A grade as your percentage is %f\n",t);
}
else if(t>80&&t<=90)
{
printf("you got B grade as your percentage is %f \n",t);
}
else if(t>70&&t<=80)
{
printf("you got C grade as your percentage is %f \n",t);
}
else if(t>60&&t<=70)
{
printf("you got D grade as your percentage is %f \n",t);
}
else if(t>50&&t<=60)
{
printf("you got E grade as your percentage is %f \n",t);
}
else
{
printf(" you got F grade as your percentage is %f \n",t);
}
}
else
{
printf("sorry you are failed in one or more subjects so there is no percentage or grade but your total is %d \n",f);
}
}
