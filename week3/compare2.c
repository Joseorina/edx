#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool compare_strings(string a, string b);

int main(void)
{
    //Get two strings
    string s = get_string("s: ");
    string t = get_string("t: ");

    //compare string equality
    if (compare_strings(s, t))
    {
        printf("same\n");
    }
    else
    {
        printf("Different\n");
    }
    

}

bool compare_strings(string a, string b)
{
    //compare length of strings
    if (strlen(a) != strlen(b))
    {
        return false;
    }

    for (int i = 0, n = strlen(a); i < n; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}