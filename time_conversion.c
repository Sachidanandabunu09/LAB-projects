#include <stdio.h>

int main() {
    int hours, minutes, seconds, total_seconds;

    
    printf("Enter time:\n");
    printf("Hours: ");
    scanf("%d", &hours);
    printf("Minutes: ");
    scanf("%d", &minutes);
    printf("Seconds: ");
    scanf("%d", &seconds);

    total_seconds = (hours * 3600) + (minutes * 60) + seconds;

    printf("\nTotal seconds: %d\n", total_seconds);

    return 0;
}