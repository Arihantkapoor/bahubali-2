#include<stdio.h>
void main()
{
int a,b,c;
printf(" Enter The Values Of a,b,c \n");
scanf("%d%d%d", &a,&b,&c);
if(a>b)
 {
  if(b>c)
   {
    printf(" %d Is The Maximum And %d Is The Minimum \n", a,c);
   }
  else
   {
    if(a>c)
     {
      printf(" %d Is The Maximum And %d Is The Minimum \n", a,b);
     }
    else
     {
      printf(" %d Is The Maximum And %d Is The Minimum \n", c,b);
     }
    }
 }
else
 {
  if(c<a)
   {
    printf(" %d Is The Maximum And %d Is The Minimum \n", b,c);
   }
  else
   {
    if(c<b)
     {
      printf(" %d Is The Maximum And %d Is The Minimum \n", b,a);
     }
    else
     {
      printf(" %d Is The Maximum And %d Is The Minimum \n", c,a);
     } 
   }
 }
}
