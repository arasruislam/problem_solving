#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("%d\n is the maximum number", a);
    }
    else
    {
        printf("%d\n is the maximum number", b);
    }

    return 0;
}