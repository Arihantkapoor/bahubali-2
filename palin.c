#include<stdio.h>
#include<string.h>
main()
{
char str[20],str2[20];
int i,j,flag=1,l=0;
printf(" Enter the string \n");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
l++;
j=0;
for(i=l-1;i>=0;i--)
{
str2[j]=str[i];
j++;
}
str2[j]='\0';
printf("string:%s \n", str);
printf("Revers string: %s \n",str2);
for(i=0;str[i]!='\0';i++)
{
if(str[i]!=str2[i])
{
flag=0;
break;
}
}
if(flag==1)
printf(" The entered string is palindrome \n");
else
printf(" The  entered string nis not a palindrome \n");
}
