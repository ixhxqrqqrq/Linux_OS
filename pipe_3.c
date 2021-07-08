#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int fd[2];
    int ret;
    char writebuf[] = "Hello Linux";
    char readbuf[128]={0};
    ret = pipe(fd);
    if(ret < 0)
    {
        printf("Creat pipe failure\n");
        return -1;
    }
    printf("Creat pipe success fd[0]=%d,fd[1]=%d\n",fd[0],fd[1]);
    write(fd[1],writebuf,sizeof(writebuf));
    //start read form pipe
    read(fd[0],readbuf,128);
    printf("readbuf = %s\n",readbuf);
    //second read from pipe
    memset(readbuf,0,128);
    read(fd[0],readbuf,128);   //process will go to sleep
    printf("second read after\n");




    close(fd[0]);
    close(fd[1]);


    return 0;
}
