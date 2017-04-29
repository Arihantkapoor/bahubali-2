#include<stdio.h>
main()
{
int a[10][10],b[10][10],i,j,r,c,flag=0;
printf("ENTER THE ROWS & COLUMNS \n");
scanf("%d%d",&r,&c);
printf("ENTER THE ELEMENTS \n");
for(i=0;i<r;i++)
   for(j=0;j<c;j++)
     scanf("%d",&a[i][j]);
printf("THE ELEMENTS ARE \n");
for(i=0;i<r;i++)
   {
   for(j=0;j<c;j++)
     {
     printf("%d\t",a[i][j]);
     }
    printf("\n");
   }
printf("THE TRANSPOSE OF THE GIVEN MATRIX IS \n");
   for(i=0;i<c;i++)
   {
   for(j=0;j<r;j++)
     {
        b[i][j]=a[j][i];
     printf("%d\t",b[i][j]);
     }
    printf("\n");
   }
for(i=0;i<r;i++)
   
   for(j=0;j<c;j++)

     if(a[i][j]!=b[i][j])
      {
         flag=1;
         break;
       }
if(flag==1)
   printf(" THE GIVEN MATRIX IS NOT SYMMETRIC\n");
else
  printf(" THE GIVEN MATRIX IS SYMMETRIC\n");
}
     


