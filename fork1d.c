#include<stdio.h>
#include<unistd.h>
int main()
{
        pid_t pid=fork();
        if(pid==0)
        {
                printf("this child-process ,pid==%d\n",pid);
        }
        if(pid>0)
        {
                printf("this parent-process,pid==%d\n",pid);
        }
        printf("hello\n");
        printf("world\n");
        return 0;
}

