#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Memory for numbers
    int *numbers = NULL;
    int capacity = 0;

    //prompt for numbers(untill EOF)
    int size = 0;
    while (true)
    {
        //Memory for numbers
        int number = get_int("Number: ");

        //check for EOF
        if (number == INT_MAX)
        {
            break;
        }

        //Check whether there is enough space for numbers
        if (size == capacity)
        {
            //Allocate space for numbers
            int *tmp = realloc(numbers, sizeof(int) * (size + 1));
            if (!tmp)
            {
                if (numbers)
                {
                    free(numbers);
                }
                return 1;
            }
            numbers = tmp;
            capacity++;
        }
        //Add number to list
        numbers[size] = number;
        size++;
    }
    //print numbers
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%i\n", numbers[i]);
    }
    //free Memory
    if (numbers)
    {
        free(numbers);
    }

}
