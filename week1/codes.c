#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("mising commadn line argument\n");
        return 1;
    }
    printf("Hello, %s\n", argv[1]);
    return 0;
}