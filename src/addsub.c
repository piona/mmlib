#include <mmlib/addsub.h>
#include <stdio.h>

int mmlib_add(int x, int y)
{
    printf("add: x = %d y = %d\n", x, y);
    return x + y;
}

int mmlib_sub(int x, int y)
{
    printf("sub: x = %d y = %d\n", x, y);
    return x - y;
}

