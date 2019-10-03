#include <cs50.h>
#include <stdio.h>

void chart(int score);

int main(void)
{
    //Get scores from users
    int cat1 = get_int("Cat1: ");
    int cat2 = get_int("Cat2: ");
    int cat3 = get_int("Cat3: ");

    //Chart first cat
    printf("Cat1: ");
    chart(cat1);

    //Chart for cat 2
    printf("Cat2: ");
    chart(cat2);

    //chart for cat 3
    printf("Cat3: ");
    chart(cat3);
}

//Fucntion to Generate bar
void chart(int score)
{
    //Ouput one hash per point
    for ( int i =0; i < score; i++)
    {
        printf("#");
    }
    printf("\n");

}