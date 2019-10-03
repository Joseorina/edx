#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //Get a string
    char *s = get_string("s: ");
    if (s == NULL)
    {
        return 1;
    }

    //Get another string
    char *t = get_string("t: ");
    if (t == NULL)
    {
        return 1;
    }

    //compare strings fro equality
    if (strcmp(s, t) == 0)
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }
    return 0;    
}