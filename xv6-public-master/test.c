#include "types.h"
#include "stat.h"
#include "user.h"
#include "param.h"
#include "fs.h"

int main(int argc, char *argv[]){
    int pid=0, wtime, rtime;
    int p = fork();
    if (p<0)
        printf(1, "fork failed");
    // child process
    if(p == 0){
        //printf(1, "child process:%d\n", getpid());
        for(int i=0; i<200000000; i++){
        }
        exit();
    }
    // parent process
    else if(p>0){
        //printf(1, "p process:%d\n", getpid());
        //for(int i=0; i<1000; i++){

        //}
        pid = waitx(&wtime, &rtime);
    }
    printf(1, "process: %d, wait time: %d run time: %d\n ", pid, wtime, rtime);
    //printf(1, "ghj");
    exit();

}

