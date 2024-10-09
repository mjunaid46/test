#include <stdio.h>

// Function declarations
void functionA();
int functionB(int param);
char functionC(char c);

int main() {
    printf("Hello, World!\n");
    functionA();
    return 0;
}

// Function definitions
void functionA() {
    printf("Function A called.\n");
}

int functionB(int param) {
    return param * 2;
}

char functionC(char c) {
    return c + 1;
}
