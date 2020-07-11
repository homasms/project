#include stdc-predef.h
#include types.h
#include stat.h
#include user.h
#include param.h

int main(int argc, char *argv[]){
    int p = fork();
    // child process
    if(p == 0){
        printf("child process:\n", p);
        for(int i=0; i<100000000; i++)
            int j = i;
    }
    // parent process
    if(p>0){
        int pid, wtime, rtime = 0;
        pid = waitx(&wtime, &rtime);
        printf("process ", pid, " wait time ", wtime, " run time ", rtime, "\n")

    }
}

