// Logical operators

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for answer
    int i = get_int("Input integer: ");

    // Check answer
    if (i % 2 == 0)
    {
        printf("Even number");
    }
    else
    {
        printf("Not a modulo");
    }
}