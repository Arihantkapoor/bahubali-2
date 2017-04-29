#include<stdio.h>
void main()
{
   int c, d,i,j, first[10][10], second[10][10], sum[10][10];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d",&i,&j);
   printf("Enter the elements of first matrix \n");
 
   for (c=0; c<i; c++)     /* Row counter  */
      
   { 
    for (d=0; d<j; d++)  /* Column counter */
      {
         scanf("%d", &first[c][d]);  /* {1,2,3,4};  */
       }
   }
 printf("Display First Matrix \n");
for (c = 0; c < i; c++)
   {
       for (d = 0 ; d <j; d++)
      {
         
         printf("first[%d][%d]=%d\n",c,d,first[c][d]);
      }
printf("\n");
 }

   printf("Enter the elements of second matrix\n");
 
   for (c = 0; c < i; c++)
      {
      for (d = 0 ; d < j; d++)
      {
        scanf("%d", &second[c][d]);  /* {5,6,7,8 }*/
      }
   }

printf("Display Second Matrix \n");
for (c = 0; c < i; c++)
   {
       for (d = 0 ; d <j; d++)
      {
         
         printf("second[%d][%d]=%d\n",c,d,second[c][d]);
      }
printf("\n");
 }
   printf("Sum of entered matrices:-\n");
 
   for (c = 0; c < i; c++)
   {
       for (d = 0 ; d <j; d++)
      {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
   }
 
}
