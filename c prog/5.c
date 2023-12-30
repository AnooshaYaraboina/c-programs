#include <stdio.h>
int main()
{
    float l, b, r, area_r, perimeter_r, area_c, circumference;

    printf("Enter the length of rectangle: ");
    scanf("%f", &l);

    printf("Enter the breadth of rectangle: ");
    scanf("%f", &b);

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    area_r = l * b;
    printf("\nArea of rectangle: %.2f ", area_r);

    perimeter_r = 2 * (l + b);
    printf("\nperimeter of the rectangle: %.2f", perimeter_r);

    area_c = 3.14 * r * r;
    printf("\n\nArea of the circle: %.2f", area_c);

    circumference = 2 * 3.14 * r;
    printf("\nCircumference of the circle:%.2f", circumference);

    return 0;
}