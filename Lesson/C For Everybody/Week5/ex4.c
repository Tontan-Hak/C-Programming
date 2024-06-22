// K&R Exercise 1-17: You should write a function called reverse(s) that reverses the characters in a string. Reverse the string in place.

#include <stdio.h>
#include <string.h>
int main() {
    char t[1000];
    char *copy();
    void reverse();
    copy("Hello world", t);
    printf("%s\n", t);
    reverse(t);
    printf("%s\n", t);
    reverse(copy("XY", t));
    printf("%s\n", t);
    reverse(copy("Even", t));
    printf("%s\n", t);
    reverse(copy("Odd", t));
    printf("%s\n", t);
    reverse(copy("civic", t));
    printf("%s\n", t);
}

/* copy s1 to s2; assume s2 big enough */
char *copy(s1, s2)
char s1[], s2[];
{
    int i;
    for(i=0;(s2[i] = s1[i]);i++);
    return s2;
}


// Answer

/* void reverse(char s[]);

void itoa(int n, char s[]) {
    int i, sign;

    if ((sign = n) < 0)    // record sign 
        n = -n;              // make n positive 
    i = 0;
    do {    // generate digits in reverse order 
        s[i++] = n % 10 + '0';     // get next digit 
    } while ((n /= 10) > 0); // delete it 
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}

void reverse(char s[]) {
    int i, j;
    char temp;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
} */
