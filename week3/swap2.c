#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x;
    int *y;

    x = malloc(sizeof(int));

    *y = 42;
    *y = 13;

    y = x;

    *y = 13;

}
