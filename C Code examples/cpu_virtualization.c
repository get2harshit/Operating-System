#include <stdio.h>
#include <unistd.h>

int main() {
    for (int i = 0; i < 10; i++) {
        printf("Process %d: iteration %d\n", getpid(), i);
        sleep(1);
    }

    return 0;
}