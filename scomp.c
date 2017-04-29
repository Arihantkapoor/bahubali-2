#include<stdio.h>
void main()
{
char str1[10],str2[10];
int i;
printf("enter the strings str1 & str2 : \n");
scanf("%s%s",str1,str2);
printf("entered strings are : %s%s   \n",str1,str2);
// comparision 
for(i=0;str1[i]==str2[i];i++)
{
printf("same strings \n ");
}
printf("different strings");
}


