#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    //Get a string
    char *s = get_string("s: ");

    //copy strings address
    char *t = s;

    //capitalize first letter in the string
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }
    //print strinfs twice
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}