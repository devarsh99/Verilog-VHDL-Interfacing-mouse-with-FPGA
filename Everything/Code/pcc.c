// CPP code to create three child
// process of a parent
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
  
// Driver code
int main()
{
    int pid, pid1, pid2,pid3;
  
    // variable pid will store the
    // value returned from fork() system call
    pid = fork();
  
    // If fork() returns zero then it
    // means it is child process.
    if (pid == 0) {
  
        // First child needs to be printed
        // later hence this process is made
        // to sleep for 3 seconds.
        sleep(3);
  
        // This is first child process
        // getpid() gives the process
        // id and getppid() gives the
        // parent id of that process.
        printf("Created child[4] pid = %d for Multiplication\n\n",getpid());
    }
  
    else {
        pid1 = fork();
        if (pid1 == 0) {
            sleep(2);
            printf("Created child[3] pid = %d for Addition\n",getpid());
        }
        else {
            pid2 = fork();
            if (pid2 == 0) {
                // This is third child which is
                // needed to be printed first.
                printf("Created child[2] pid = %d for Division\n", getpid());
            }
  
            // If value returned from fork()
            // in not zero and >0 that means
            // this is parent process.
            else {
                 pid3 = fork();
            if (pid3 == 0) {
                // This is third child which is
                // needed to be printed first.
                printf("Created child[1] pid = %d for Substraction\n",getpid());
            }
            else
                // This is asked to be printed at last
                // hence made to sleep for 3 seconds.
                sleep(3);
             
            }
        }
    }
  
    return 0;
}

