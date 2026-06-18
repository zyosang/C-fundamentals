#include <stdio.h>
int main() {

    int principal, time;
    float simple_interest, rate;

    printf("enter the principal\n", principal);
    scanf("%d", &principal);

    printf("enter the rate\n", rate);
    scanf("%f", &rate );

    printf("enter the time\n", time);
    scanf("%d", &time);

    simple_interest = (principal*rate*time)/100;
    printf("the interest to your pricipal as per the rate and time given is %f\n", simple_interest);

    return 0;
}