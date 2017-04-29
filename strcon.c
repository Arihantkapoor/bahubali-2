#include<stdio.h>
#include<string.h>
void main()
{
char str1[80],str2[80];
int i,j;
printf(" enter string one\n");
scanf("%s",str1);
printf(" enter string two\n");
scanf("%s",str2);
for(i=0;str1[i]!='\0';i++)
{
for(j=0;str1[i]!='\0';j++)
{
str1[i+j]=str2[j];
}
}
printf("after concatination the string one is %s\n",str1);
}
