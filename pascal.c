#include"stdio.h"
int main() 
{
    int r, i, j, num;
    printf("How many lines do you want?");
    scanf("%d", &r);
    for(i=0;i<r;i++) 
    {
        num = 1;
        for(j=0;j<=i;j++) 
        {
            printf("%d", num);
            num = (num * (i-j)/(j+1));
        }
        printf("\n");
    }
}
