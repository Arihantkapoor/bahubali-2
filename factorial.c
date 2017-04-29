 #include<stdio.h>
 void main()
 {
 int n,res;
 int fact(int n);
 printf("Enter the number\n");
 scanf("%d",&n);
 res=fact(n);
 printf("%d",res);
 }
 int fact(int x)
 {
   
 if(x==1 || x==0 )
 return 1;
 else
 return x*fact(x-1);
   
 }
