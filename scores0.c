#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Get user input
    int cat1 = get_int("Cat1: ");
    int cat2 = get_int("cat2: ");
    int cat3 = get_int("cat3: ");

    //Generate first bar
    printf("Score 1: ");
    for (int i = 0; i < cat1; i++)
    {
        printf("#");
    }
    printf("\n");

    //generate second bar
    printf("cat 2: ");
    for (int i = 0; i < cat2; i++)
    {
        printf("#");
    }
    printf("\n");

    //Generate third bar
    printf("Cat 3: ");
    for (int i = 0; i < cat3; i++)
    {
        printf("#");
    }
    printf("\n");

}