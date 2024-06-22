// K&R Exercise 1-10. Write a program which prints the words in its input, one per line. A word is any string separated by a space or newline.

#include <stdio.h>

int main() {
    int c;
    int in_word = 0;  // Flag to indicate if we are inside a word

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n') {
            if (in_word) {
                putchar('\n');  // End the current word
                in_word = 0;    // Reset the flag
            }
        } else {
            putchar(c);  // Print the character
            in_word = 1; // Set the flag to indicate we are inside a word
        }
    }

    return 0;
}
