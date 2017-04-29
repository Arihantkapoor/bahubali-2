#include<stdio.h>

void main()
{

  int i;

  for(i=1;i<=10;i++)
  {
    for(j=2;j<3;j++)
    {
      j=j+i;
    printf("%d \n",j);
  }
 }
}
/*   iteration 1 :

      i=1, 1<=10 true
       j=2, 2<3  true
          j=2+1=3  ... prints 3
          j++
          j=j+1;
          j=3+1 =4
          j<3 --> 4<3      false

iteration 2
  
  i++ ...> i=2
     i<=10 ..> 2<10 true
       j=2 ,2<3 true
           j=j+i=2+2=4
     prints 4
   j++ --> j=4+1=5
   j<3 ..> 5<3  false
  
          
   
