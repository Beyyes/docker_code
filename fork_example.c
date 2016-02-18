#include <unistd.h>
#include <stdio.h>

int main() {
    pid_t fpid;
    int count = 0;
    fpid = fork();
    if(fpid == 0) {
        printf("I'm child, and process id is %d\n", getpid());
    }
    else if(fpid < 0) {
        printf("error");
    }
    else {
        printf ("I'm parent, and process id is %d\n", getpid());
    }
}
