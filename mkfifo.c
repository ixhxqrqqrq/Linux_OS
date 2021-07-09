#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
int main()
{
    int ret;
    ret = mkfifo("./myfifo",0777);
    if(ret < 0)
    {
        printf("Creat myfifo failure\n");
        return -1;
    }
    printf("Creat myfifo success\n");
    return 0;
}
