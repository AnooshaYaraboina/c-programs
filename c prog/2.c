#include <stdio.h>
int main()
{
    float distance;
    float meters;
    float feets;
    float inches;
    float centimeters;
    printf("Distance between two cities: ");
    scanf("%f", &distance);

    /*Convert into meters*/
    meters = 1000 * distance;
    feets = 3280.84 * (float)distance;
    inches = 39370.08 * (float)distance;
    centimeters = 100000 * distance;

    printf("\n distance in Meters: %f\n", meters);
    printf("\n distance in feets: %f\n", feets);
    printf("\n distance in inches: %f\n", inches);
    printf("\n distance in centimeters: %f\n", centimeters);

    return 0;
}