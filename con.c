
#include<stdio.h>
void main()
{
char input,output;
printf("enter a alphabet");
scanf("%c",&input);

if(input>='a')
	output=input-32;
else
	output=input+32;
printf("%c oppsite case %c\n",input,output);

}
