#include <cs50.h>
#include <stdio.h>

int main(void)
//clang hello.c -o hello -lcs50
{
    int n;
    //validate user input
    do
    {
        n = get_int("Height:");
    }
    while(n < 0 || n > 23);
    
    //make pattern
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=n-1; j++)
        {
            //loop for blank space or #
            if (i + j < (n-1))
                printf(" ");
            else
                printf("#");
        }
        
    }
    printf("\n");
}
