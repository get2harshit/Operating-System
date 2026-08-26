#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // Child
        printf("Child before exec: PID = %d\n", getpid());

        execlp("sleep", "sleep", "1000", NULL);

        // Only reached if exec fails
        perror("exec failed");
    }
    else if (pid > 0) {
        // Parent
        printf("Parent: PID = %d, Child PID = %d\n", getpid(), pid);
    }

    return 0;
}