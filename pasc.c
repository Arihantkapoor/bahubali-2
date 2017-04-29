/*
 * Program to print Pascal Triangle
 */
 
#include <stdio.h>
int main(void)
{
    int i,j,n,k,s;
    long c;
    printf("\nEnter no. of lines : ");
    scanf("%d",&n);
    printf("\n");
    s=n;
    for(i=0;i<n;i++)
    {
        c=1;
        for(k=s;k>=0;k--)
        {
            printf("   ");
        }
        s--;
        for(j=0;j<=i;j++)
        {
            printf("%6ld",c);
            c=(c*(i-j)/(j+1));
        }
        printf("\n");
    }
    return 0;
}
