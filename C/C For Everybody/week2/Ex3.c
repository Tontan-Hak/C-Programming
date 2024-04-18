#include <stdio.h>

int main() {
    int usf, euf;
    printf("Enter US floor number: ");
    scanf("%d", &usf);
    euf = usf + 1;
    printf("European floor number is: %d\n", euf);
}