#include <stdio.h>

int main() {
    int x = 42;
    int *ptr = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value at pointer: %d\n", *ptr);

    return 0;
}
