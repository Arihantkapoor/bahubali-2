// produce or generate  a random number 

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void main()
{
    int min, max, num, i;
    time_t seed;

    printf("enter the range..\n");
    scanf("%d%d",&min,&max);
 
     srand((unsigned)time(&seed));
     //srand(seed);

    printf("The random numbers are\n");
    for(i=min;i<=max;i++) 
    {
       num = rand()%max;
       if(num<=min)
       {
            num  += min;        13 +(20-13)   13+20-13
       }  
       printf(" %d\t", num );
    }
}
