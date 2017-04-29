#include<stdio.h>
void main()
{
char a[10];
int i,len=0;
printf("enter any string to calculate length : \n");
scanf("%s",a);
printf("entered string is : %s  \n",a);
for(i=0;a[i]!='\0';i++)
{
len++;
}
printf("length of the entered string is : %d \n",len);
}

