#include "types.h"
#include "stat.h"
#include "user.h"
#include "param.h"

struct proc_info {
    int pid;
    int memsize;            // in bytes
};

int main(void){
    // first fork to make a child and parent
    int pid=fork();
    // child 1 process
    if(pid==0){
        // allocate memory to process to change the size
        char* a = malloc(5000000* sizeof(char*));
        // run a huge loop to not finish process soon
        for(int i=0;i<5000000;i++){
            // use variable to prevent compile error
            a[i]='a';
        }
        while(0<1){
        }
    }
    else if(pid>0) {
        // second fork to make a child from parent
        int second=fork();
        // child 2 process
        if(second==0){
            //allocate different size of memory to test correctness of syscall
            char* b=malloc(1000000* sizeof(char(*)));
            for(int i=0;i<1000000;i++){
                // use variable to prevent compile error
                b[i]='b';
            }
            while(0<1){

            }
        }
        // parent process
        else if(second>0) {
            // need sleep to make delay
            sleep(20);
            // main proc_info that we pass it to syscall
            struct proc_info p [NPROC];
            // call syscall to start running it
            // p contains running and runnable processes after that
            newOne(p);
            // p has too many empty elements with zero value, so break to avoid printing them.
            // NPROC is number of all processes that is defined in "param.h"
            for(int i=0;i<NPROC;i++){
                if(p[i].pid==0)
                    break;
                printf(1,"%d %d\n", p[i].memsize, p[i].pid);

            }
        }
    }

    exit();
}