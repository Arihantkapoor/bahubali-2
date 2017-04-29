#include<stdio.h>
main()
{
struct employee1
{
float salary;
char name[24];
}s;

union employee2
{
float salary;
char name[24];
}u;

printf("\n size of structure employee %ld \n",sizeof(s));
printf("\n size of union employee %ld \n",sizeof(u));
}

