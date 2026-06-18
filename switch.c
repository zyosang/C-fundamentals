#include <stdio.h>
int main() {
    int day = 3;

    switch (day) {
        case 1:
            printf("today is sunday!");
            break;

        case 2:
            printf("today is monday!");
            break;

        case 3:
            printf("today is tuesday!");
            break;

        case 4:
            printf("today is wednesday!");
            break;

        case 5:
            printf("today is thursday");
            break;
        
        case 6:
            printf("today is friday!");
            break;

        case 7:
            printf("today is saturday!");
            break;

        default:
            printf("there are only 7 days in a week");
            break;
    };
    return 0;
}