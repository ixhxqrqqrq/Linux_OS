## anonymous pipe
## named pipe
## signal 
1. send : kill, raise, alarm
2. receive : pause(), sleep(), while();
3. execute : signal

pause : int pause(void)
    process sleep
signal : 
    void (*signal(int signum, void(*handler)(int)))(int) 


---------------------IPC (interprocess communication) IPC 對象
1. shared memory
2. 消息隊列（訊息傳遞）
3. 信號燈
--open
msg_get
shm_get
sem_get
--------------------------------
--read, write
msgsnd msgrecv
shmat shmdt
semop
--close
msgctrl
shmctrl
semctrl
--------------------------------
共享內存創建
有親緣關系
IPC_PRIVATE=> shmid = shmget(IPC_PRIVATE,128,0777);
無親緣關系
ftok()  =>    key = ftok("./a.c",'a');
讀取：shmat => kernal 映射到 user  ，類似malloc，成功後返回映射後的地址
shmdt ： 刪除映射地址
shmctl ： 刪除共享內存對象









