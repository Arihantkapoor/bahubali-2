#include<stdio.h>
#include<string.h>
void main()
{
char str1[80],str2[80];
int i,len=0;
printf (" enter string one\n");
scanf("%s",str1);
printf (" enter string two\n");
scanf("%s",str2);
if( strlen(str1)==strlen(str2))
{
	for(i=0;str1[i]!='\0';i++)
	{
	if(str1[i]!=str2[i])
	{
	printf("strings are not equal \n");
        }
        else
         {
           len++;
         }
	}
	if(len== strlen(str1) )
	{
	printf("strings are equal \n");
	}
}
else
{
printf("strings are not even of same length \n");
}

}

            
