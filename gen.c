#include<stdio.h>
main()
{
char gender;
printf("\n enter gender of the person");
scanf("%c",&gender);
if((gender=='m')||(gender=='M'))
printf("\n the person is MALE");
else if((gender=='f')||(gender=='F'))
printf("\n the person is FEMALE");
else
printf("\n entered gender is wrong input");
}
