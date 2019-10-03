#include <stdio.h>
#include <cs50.h>

#include "struct.h"

int main()
{
    int enrollment = get_int("Enrollment: ");
    student students[enrollment];

    for (int i = 0; i < enrollment; i++)
    {
        students[i].name = get_string("Name: ");
        students[i].dorm = get_string("Dorm: ");
    }

    for (int i = 0; i < enrollment; i++)
    {
        printf("%s is in %s\n", students[i].name, students[i].dorm);
    }
}
