#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
 #include <sys/wait.h>
int main(){
    pid_t pid;
    pid = fork();
    if(pid>0){
        sleep(8);
        if(waitpid(pid,NULL,NOHANG) == 0){
            kill(pid,9);
        }
        wait(NULL);
        while(1);
    }
    if(pid == 0){  // child process
        printf("raise function before\n");
        raise(SIGTSTP);
        printf("rasie function after\n");
        exit(0);
        
    }
    return 0;
}
