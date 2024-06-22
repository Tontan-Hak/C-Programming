// K&R Exercise 1-7. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.

#include <stdio.h>

int main() {
    int c, last_c;

    last_c = 0;  // Initialize to a value that is not a blank

    while ((c = getchar()) != EOF) {
        if (c != ' ' || last_c != ' ') {
            putchar(c);
        }
        last_c = c;
    }
}
