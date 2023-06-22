#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};
void readTime(struct Time *t) {
    printf("Enter the time (hours minutes seconds): ");
    scanf("%d %d %d", &(t->hours), &(t->minutes), &(t->seconds));
}
struct Time calculateTimeDifference(struct Time t1, struct Time t2) {
    struct Time diff;
    int totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int diffSeconds = totalSeconds2 - totalSeconds1;

    diff.hours = diffSeconds / 3600;
    diffSeconds %= 3600;
    diff.minutes = diffSeconds / 60;
    diff.seconds = diffSeconds % 60;

    return diff;
}

void displayTime(struct Time t) {
    printf("%02d:%02d:%02d\n", t.hours, t.minutes, t.seconds);
}

int main() {
    struct Time time1, time2, difference;

    printf("Enter the first time period:\n");
    readTime(&time1);

    printf("\nEnter the second time period:\n");
    readTime(&time2);

    difference = calculateTimeDifference(time1, time2);

    printf("\nDifference: ");
    displayTime(difference);

    return 0;
}
