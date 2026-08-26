#include <stdio.h>
#include <unistd.h>

int main() {
    int ret = fork();
    int x = 1;

    if (ret == 0) {
        printf("I am child\n");

        x = x + 1;

        printf("Child x = %d\n", x);
    }
    else if (ret > 0) {
        printf("I am parent\n");

        x = x - 1;

        printf("Parent x = %d\n", x);
    }
    else {
        printf("fork failed\n");
    }

    return 0;
}