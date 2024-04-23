#include <stdio.h> // While loop is used to execute a block of statements repeatedly until a given condition is true.

/* int main() {
    int i = 0;
    while (i < 5) {
        printf("%d\n", i);
        i++;
    }
    return 0;
} */

// real life example of while loop counting down from 10 to 1 and then printing "Happy New Year!!"

int main() {
    int countdown = 10;

    while (countdown > 0) {
        printf("%d\n", countdown);
        countdown--;
    }

    printf("Happy New Year!!\n");

    return 0;
}