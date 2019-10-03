#include <stdio.h>
#include <cs50.h>

const int COUNT = 3;

void chart(int cat);

int main(void)
{
    //Get scores from user
    int cats[COUNT];
    for (int i = 0; i < COUNT; i++)
    {
        cats[i] = get_int("Cat %i: ", i + 1);
    }

    //chart scores
    for (int i = 0; i < COUNT; i++)
    {
        printf("Cat %i: ", i+1);
        chart(cats[i]);
    }    
}

void chart(int cat)
{
    for (int i = 0; i < ; i++)
    {
        printf("#");
    }
    printf("\n");
}