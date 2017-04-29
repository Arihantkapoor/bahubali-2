#include<stdio.h>
int sum(int x)
{
	if(x!=0)
		return x+sum(x-1);
	else
		return x;
}
void main()
{
	int n,res;
	printf("enter a number : ");
	scanf("%d",&n);
	res=sum(n);
	printf("result = %d\n",res);
}
/*5	5+sum(4)
	5+4+sum(3)
	5+4+3+sum(2)
	5+4+3+2+sum(1)
	5+4+3+2+1+sum(0)
	5+4+3+2+1+0	*/
