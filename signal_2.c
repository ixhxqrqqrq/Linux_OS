#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
void myfun(int signum){
    int i;
    i=0;
    while(i<10){
        printf("process signal signum=%d\n",signum);
        sleep(1);
        i++;
    }
    return;
}
int main(){
    int i;
    i=0;
    signal(14,myfun);
    printf(" alarm before\n");
    alarm(9); // _exit()    exit()
    printf(" alarm after\n");
    signal(14,SIG_IGN);  //signal should be ignored
    signal(14,SIG_DFL);  //default signal handling
    while(i<20){
        i++;
        sleep(1);
        printf("process things, i=%d\n",i);
    }
    return 0;
}
