// program for calculating simple interest using user input

#include <stdio.h>

int main()
{

    int principal, time;
    float rate, simple_interest;

    printf("Enter the principal amount: ");
    scanf("%d", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time in years: ");
    scanf("%d", &time);

    simple_interest = (principal * rate * time) / 100;
    printf("The simple interest after %d years is: %.2f", time, simple_interest);

    return 0;
}