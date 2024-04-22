#include <stdio.h>

int main(){
    int guess;
    while (scanf("%d", &guess) != EOF) {
        if (guess == 42) {
            printf("Nice work!\n");
        }
        else if (guess < 42) {
            printf("Too low\n");
        }
        else {
            printf("Too high\n");
        }
    }
}