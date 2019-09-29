#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //prompt user for a number
    int capacity;
    do
    {
        capacity = get_int("Capacity: ");
    }
    while (capacity < 1);

    //memory for numbers
    int numbers[capacity];

    //prompt for numbers
    int size = 0;
    while (size < capacity)
    {
        //prompt for number
        int number = get_int("Number: ");

        //add to list
        numbers[size] = number;
        size ++;
    }

    //print numbers
    for (int i = 0; i < size; i++)
    {
        printf("%i\n", numbers[i]);
    }
}
