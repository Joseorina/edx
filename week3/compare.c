#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Get two integers
    int i = get_int("i: ");
    int j = get_int("j: ");

    //compare the two integers
    if (i == j)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}