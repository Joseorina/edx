#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt user for name
    string s = get_string("Name: ");

    //count number of character up untill '\0' (null)
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);
}