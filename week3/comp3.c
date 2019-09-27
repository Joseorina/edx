#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool compare_strings(string a, string b); 

int main(void)
{   
    //get two strings
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    if (compare_strings(s, t))
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }
    
}

bool compare_strings(string a, string b)
{
    if (strlen(a) != strlen(b))
    {
        return false;
    }

    for (int i = 0, n = strlen(a); i < n; i++)
    {
        //different
        if (a[i] != b[i])
        {
            return false;
        }
    }
    //same
    return true;
}