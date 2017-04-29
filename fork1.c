#include  <stdio.h>
#include<unistd.h>
#include  <sys/types.h>
int main()
{

        int i;
        
        i=fork();
        printf("\n");

        if(i==0)
        {

                printf("Child has started\n\n");
                printf("child printing first time \n");

                printf("getpid : %d getppid : %d \n",getpid(),getppid());
                
        }
        else
        {
                printf("parent has started\n");
                printf("getpid : %d  getppid : %d \n",getpid(),getppid());
                printf("\n");

        }

        

        return 0;
}
