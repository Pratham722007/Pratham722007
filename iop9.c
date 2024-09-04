#include <stdio.h>

int main() {
    int hours, minutes, seconds, total_seconds;

    printf("Enter time in hours: ");
    scanf("%d", &hours);

    printf("Enter time in minutes: ");
    scanf("%d", &minutes);

    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    total_seconds = hours * 3600 + minutes * 60 + seconds;

    printf("Total seconds: %d", total_seconds);

    return 0;
}