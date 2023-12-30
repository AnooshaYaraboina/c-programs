#include <stdio.h>
int main()
{
    int english, hindi, maths, science, social, aggregate;
    float percentage;

    printf("Enter marks in English: ");
    scanf("%d", &english);

    printf("Enter marks in Hindi: ");
    scanf("%d", &hindi);

    printf("Enter marks in Maths: ");
    scanf("%d", &maths);

    printf("Enter marks in Science: ");
    scanf("%d", &science);

    printf("Enter marks in Social: ");
    scanf("%d", &social);

    aggregate = english + hindi + maths + science + social;
    printf("Aggregate_marks is :%d", aggregate);

    percentage = (float)(aggregate / (float)500) * (float)100;

    printf("\nTotal_percentage is: %f\n", percentage);
    return 0;
}