#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int fd[2];
    int ret;
    int i=0;
    char writebuf[] = "Hello Linux";
    char readbuf[128]={0};
    ret = pipe(fd);
    if(ret < 0)
    {
        printf("Creat pipe failure\n");
        return -1;
    }
    printf("Creat pipe success fd[0]=%d,fd[1]=%d\n",fd[0],fd[1]);
    while(i<5456){
        write(fd[1],writebuf,sizeof(writebuf));
        i++;
    }

    printf("Write pipe end\n");
    

    close(fd[0]);
    close(fd[1]);


    return 0;
}
