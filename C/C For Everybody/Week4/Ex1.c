#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;    /* lower limit of temperature table */
    upper = 280;  /* upper limit */
    step = 40;    /* step size */

    printf("FAHR   CELSIUS\n");
    printf("===============\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}
