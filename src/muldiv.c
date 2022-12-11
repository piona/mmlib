#include <mmlib/muldiv.h>
#include <stdio.h>

int mmlib_mul(int x, int y)
{
    printf("mul: x = %d y = %d\n", x, y);
    return x * y;
}

int mmlib_div(int x, int y)
{
    printf("div: x = %d y = %d\n", x, y);
    return x / y;
}

