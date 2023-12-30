#include <stdio.h>
int main()
{
    int height = 1189;
    int width = 841;
    int page, i;

    for (int i = 0; i < 9; i++)
    {
        printf("\n A%d: %d x %d", i, width, height);

        page = height;
        height = width;
        width = page / 2;
    }
    return 0;
}