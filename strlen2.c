#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("String: ");
    for (int i = 0, n = strlen(s); i< n; i++)
    {
        int c = (int) s[i];
        printf("%c %i\n", s[i], c);
    }
}