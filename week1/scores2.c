#include <stdio.h>
#include <cs50.h>

void chart(int cat);

int main(void)
{
    //get scores from user using arrays
    int cats[3];
    for (int i = 0; i < 3; i++)
    {
        cats[i] = get_int("Cat %i: ", i +1);
    }

    //Chart scores
    for (int i = 0; i < 3; i++)
    {
        printf("Cats %i:", i+1);
        chart(cats[i]);
    }
}

//Generate bar
void chart(int cat)
{   
    //Ouput one hash per point
    for (int i = 0; i < cat; i++)
    {
        printf("#");
    }
    printf("\n");
}