#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Before fork: PID=%d\n", getpid());

    int rc = fork();

    if (rc < 0) {
        perror("fork");
        return 1;
    }

    if (rc == 0) {
        printf("I am CHILD: PID=%d, PPID=%d\n", getpid(), getppid());
    } else {
        printf("I am PARENT: PID=%d, CHILD PID=%d\n", getpid(), rc);
    }

    return 0;
}