#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Get two strings
    string s = get_string("s: ");
    string t = get_string("t: ");

    //Print strings addresses
    printf("s: %p\n", s);
    printf("t: %p\n", t);
}