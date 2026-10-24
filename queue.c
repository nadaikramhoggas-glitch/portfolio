#include <stdio.h>

int main() {
    int customers[3] = {101, 102, 103};

    printf(« Bank Queue Management\n »);
    printf(« Customer %d is waiting.\n », customers[0]);
    printf(« Customer %d is waiting.\n », customers[1]);
    printf(« Customer %d is waiting.\n », customers[2]);

    printf(« \nServing customers in FIFO order:\n »);

    for (int i = 0; i < 3; i++) {
        printf(« Serving customer %d\n », customers[i]);
    }

    return 0;
}
