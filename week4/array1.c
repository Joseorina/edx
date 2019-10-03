#include <cs50.h>
#include <stdio.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    //Memory for numbers
    node *numbers = NULL;

    //prompt for numbers untill sizeof
    while (true)
    {
        //prompt for number
        int number = get_int("Number: ");

        //check for EOF
        if (number == INT_MAX)
        {
            break;
        }
        //Alocate space for numbers
        node *n = malloc(sizeof(node));
        if (!n)
        {
            return 1;
        }

        //Add number to list
        n->number = number;
        n->next = NULL;
        if (numbers)
        {
            for (node *ptr = numbers; ptr != NULL; ptr = ptr->next)
            {
                if (!ptr->next)
                {
                    ptr->next = n;
                    break;
                }
            }
        }
        else
        {
            numbers = n;
        }
        //Print numbers
        printf("\n");
        for (node *ptr = numbers; ptr !=NULL; ptr = ptr->next)
        {
            printf("%i\n", ptr->number);
        }

        //Free memory
        node *ptr = numbers;
        while (ptr != NULL)
        {
            node *next = ptr->next;
            free(ptr);
            ptr = next;
        }
    }
}
