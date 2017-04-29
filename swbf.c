#include<stdio.h>
int b,h;
int A;
int input();
int area(int b,int h);
		int main()
		{
		input();//function call
		return 0;
		}
		int input()
		{
		printf("enter  the values: \n");
		scanf("%d%d",&b,&h);
		A=area(b,h); // function call
		printf("%d \n",A);
		}
		int area(int x,int y)
		{
		A=(0.5*x*y);
		return A;
		}

		
               
