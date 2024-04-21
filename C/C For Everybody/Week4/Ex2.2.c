#include <stdio.h>

int main() {
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;    /* lower limit of temperature table */
    upper = 100;  /* upper limit */
    step = 20;    /* step size */

    printf("FAHR   CELSIUS\n");
    printf("================\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = (celsius * 9.0 / 5.0) + 32.0;
        printf("%3.0f %6.1f\n", fahr, celsius);
        celsius = celsius + step;
    }

    return 0;
}
