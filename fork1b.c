#include<stdio.h>
#include<unistd.h>
int main()
{
        pid_t process1=fork();
        printf("hello\n");
        printf("world\n");
        return 0;
}
