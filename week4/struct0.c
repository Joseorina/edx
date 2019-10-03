#include <cs50.h>
#include <stdio.h>
#include <string.h>

#include "struct.h"

int main(void)
{
    //allocate space for students
    int enrollment = get_int("Enrollment: ");
    student students[enrollment];

    //prompt for names and dorms
    for (int i = 0; i < enrollment; i++)
    {
        students[i].name = get_string("Name: ");
        students[i].dorm = get_string("Dorm: ");
    }

    for (int i = 0; i < enrollment; i++)
    {
        printf("%s is in %s \n", students[i].name, students[i].dorm);
    }

}
