#include <stdio.h>
#include <unistd.h>

int main() {
    printf("PID = %d\n", getpid());

    while (1) {
        // Keep CPU busy
    }

    return 0;
}