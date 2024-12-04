#include <stdio.h>

int main() {
    int x = 42;
    int *ptr; // Error: Pointer not initialized

    // Attempting to dereference an uninitialized pointer
    printf("Value at uninitialized pointer: %d\n", *ptr);

    // Missing address-of operator (&) while assigning to the pointer
    ptr = x; // Error: Assigning an integer to a pointer

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value at pointer: %d\n", *ptr);

    return 0;
}
