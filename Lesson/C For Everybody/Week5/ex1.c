// K&R Exercise 1-6. Count blanks and new lines. We skip tabs because it is a little tricky.

#include <stdio.h>

int main() {
    /* count blanks and new lines in input */
    int c, nl, blanks;
    nl = 0;
    blanks = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        } else if (c == ' ') {
            ++blanks;
        }
    }
    printf("%d %d\n", blanks, nl);
    return 0;
}

