#include <stdio.h>
int main()
{
    float temperature;
    float centigrade_degrees;

    printf("Enter the temperature in fahrenheit: ");
    scanf("%f", &temperature);

    centigrade_degrees = (temperature - 32) * 5 / 9;

    printf("temperature in centigrade: %.2f", centigrade_degrees);
    return 0;
}
