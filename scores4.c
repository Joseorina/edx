#include <cs50.h>
#include <stdio.h>
#include <math.h>

const int COUNT = 3;

void chart(int count, int cats[]);

int main(void)
{
    //Get scores from user
    int cats[COUNT];
    for (int i = 0; i < COUNT; i++)
    {
        cats[i] = get_int("Cat %i: ", i+1); 
    }
    chart(COUNT, cats);

}

//Generate bars

void chart(int count, int cats[])
{
    for (int i = 0; i < count; i++)
        {
            for (int j = 0; j < cats[i]; j++)
            {
                printf("#");
            }
            printf("\n");
        }
        
}
