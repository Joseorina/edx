#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //space for students
    int enrollment = get_int("enrollment: ");
    string names[enrollment];
    string dorms[enrollment];

    //prompot for names and dormms
    for (int i = 0; i < enrollment; i++)
    {
        names[i] = get_string("Name: ");
        dorms[i] = get_string("Dorm: ");
    }

    //print srudent names and dorms
    for (int i =0; i < enrollment; i++)
    {
        printf("%s is in %s\n", names[i], dorms[i]);
    }

}
