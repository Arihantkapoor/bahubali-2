#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void main()
{
   int min, max, i, num;
   float fnum;
   time_t seed;

   printf("Enter the range");
   scanf("%d%d",&min,&max);  // 0.3 to 0.6

   srand((unsigned)time(&seed));

    printf("The random Number is\n");
   for(i=0;i<100;i++)
   {
         num = rand()%(max - min)+min;
         fnum = (float)num/100.0;
         printf("%f\t", fnum);
   }  
     
   
}



