#include <stdio.h>

int main(){
    int time_period_of_revolution, days, hours, minutes ,seconds;
    time_period_of_revolution=31558150;
    days = time_period_of_revolution / 86400;
    time_period_of_revolution = time_period_of_revolution % 86400;

    hours = time_period_of_revolution / 3600;
    time_period_of_revolution = time_period_of_revolution% 3600;

     minutes = time_period_of_revolution / 60;
     seconds = time_period_of_revolution % 60;

    printf("Days:%d, hours:%d, minutes%d, seconds:%d",days, hours ,minutes, seconds);
    return 0;
}