#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>
int main(){
    printf("raise before");
    raise(9); // _exit()    exit()
    printf("raise after\n");
}
