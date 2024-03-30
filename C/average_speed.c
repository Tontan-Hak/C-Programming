#include <stdio.h>

int main()
{
    float distance, speed, time;
    int hours, minutes, seconds;

    printf("Enter the distance between two cities in km: ");
    scanf("%f", &distance);

    printf("Enter how many hours it took to travel: ");
    scanf("%d", &hours);

    printf("Enter how many minutes it took to travel: ");
    scanf("%d", &minutes);

    seconds = hours * 3600 + minutes * 60;

    time = seconds / 3600.0;

    speed = distance / time;

    printf("Average speed = %.2f km/h\n", speed);

    printf("*** END OF PROGRAM ***\n");

    return 0;
}
