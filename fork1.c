#include<stdio.h>
#include<unistd.h>
int main()
{
        printf("hello\n");
        pid_t process1=fork();
        printf("world\n");
        return 0;
}
