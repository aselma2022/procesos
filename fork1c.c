#include<stdio.h>
#include<unistd.h>
int main()
{
        pid_t process1=fork();
        printf("hello\n");
        while(1){
                usleep(1000000);
                printf("world\n");
        }
        return 0;
}
