#include<stdio.h>
#include<string.h>
void main()
{
char str[80];
int i,len=0;
printf("enter the string\n");
scanf("%s",str);
/*finding the length of string with out using strlen*/
for(i=0;str[i]!='\0';i++)
{
len++;
}
printf("length of %s is =%d \n",str, len);
/*finding the length of string  using strlen*/
len=strlen(str);
printf("length of %s  using strlen function is =%d \n",str, len);
}

