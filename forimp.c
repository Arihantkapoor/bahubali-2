#include <stdio.h>

void main()
{
   int i,j,k;
  for(i=2;i<5;i++)  //  outer for
  {
  for(j=1;j<=10;j++)   //  inner for
   {
     k=i*j;
   printf("%d *  %d = %d\n\n\n",i,j,k);

  }
 }
}

/* Program Analysis

   start execution
   i=0 	j=2, 2<5 , j=2+0 = 2; print j =2
        j=2+1=3,  3<5, j=3+0=3, print j=3
        j=3+1=4, 4<5, j=4+0=4, print j=4
        j=4+1=5 5<5 false

   i=1 
         j=2; 2<5, j=2+1=3 print 3
         j=3+1, 4<5, j=4+1=5, print 5
         j=5+1, 6<5, false
   i=2
       j=2,2<5,  j=2+2=4 print 4
       j=4+1, 5<5 false 

   i=3
      j=2, 2<5, j=2+3=5 print 5
       j=6, false
   i=4
      j=2, 2<5, j=6 print 6
      j=7, false
  i=5
       j=2, 2<5 j=7 print 7
        false
   i=6
       j=2,2<5 j=8 print 8
      false
   i=7
      j=2, 2<5 j=9  print 9
       false
   i=8
      j=2............print 10
   i=9
      j=2............print 11

stop execution   */
          
