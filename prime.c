#include<stdio.h>
void main()
{
int n,count,i,max,min;
printf("enter range \n");
scanf("%d%d",&min,&max);
for(n=(min+1);n<max;n++)  
  {
printf("outer for loop %d \n",n);
           count=0;
           for(i=2;i<n;i++)            
            { 
printf("inner loop %d \n",i);         
               if(n%i==0)
               {
                     count++;
                }
            }
        if(count==0)
        {
            printf("Prime number IS DETECTED: %d \n",n);
         }
   }
}
