#include <stdio.h>

int mymult(int a, int b) {
    int c = a * b;
    return c;
}

int main() {
    int a = 6;
    int b = 7;
    int result = mymult(a, b);
    printf("Answer: %d\n", result);
    return 0;
}
