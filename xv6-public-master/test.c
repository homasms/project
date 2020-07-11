#include "types.h"
#include "stat.h"
#include "user.h"
#include "param.h"
#include "fs.h"

int main(int argc, char *argv[]){
    int p = fork();
    if (p<0)
        printf(1, "fork failed");
    // child process
    if(p == 0){
        printf(1, "child process:%d\n", p);
        for(int i=0; i<100000000; i++){

        }
        exit();
            //int j = i;
    }
    // parent process
    else if(p>0){
        printf(1, "p process:%d\n", p);
        int pid=0, wtime, rtime;
        pid = waitx(&wtime, &rtime);
        printf(1, "process ", pid, " wait time ", wtime, " run time ", rtime, "\n");
        exit();
    }
    printf(1, "ghj");
    exit();

}

