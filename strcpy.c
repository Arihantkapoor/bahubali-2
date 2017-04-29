#include<stdio.h>
#include<string.h>
void main()
{
char str1[80],str2[80];
int i,len=0;
printf (" enter string one\n");
scanf("%s",str1);
for(i=0;str1[i]!='\0';i++)
{
str2[i]=str1[i];
}
str2[i]='\0';
printf("the string 1 is %s string2 is %s \n",str1,str2); 
len=strlen(str1);
printf("len of str1 = %d \n",len);
len=strlen(str2);
printf("len of str2 = %d \n",len);
}
