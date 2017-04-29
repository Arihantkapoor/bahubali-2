#include<stdio.h>
#include<string.h>
main()
{
char str1[20],str2[20];
int i,j,l=0;
printf("Enter the first string \n");
scanf("%s",str1);
printf("Enter the second string \n");
scanf("%s",str2);
for(i=0;str1[i]!='\0';i++)
l++;
str1[i]='\0';
for(i=l,j=0;str2[j]!='\0';i++)
{
str1[i]=str2[j];
j++;
}
printf("String: %s \n", str1);
}
