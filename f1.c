#include<stdio.h>
struct x
{
int a,b,c;
void f()
{
a=10;
b=20;
c=a+b;
}
};
void main()
{
struct x a1,a2;
a1.f();
printf("result:%d",a1.c);
}

