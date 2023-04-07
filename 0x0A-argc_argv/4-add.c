#include "main.h"
#include <stdio.h>
/**
* main - function
* @argc: array length
* @argv: an array
* Return: 0
*/
int main(int argc, char **argv)
{
    int i, a;
    a = 0;
    if (argc >= 2)
    {
        for (i = 0; i < argc; i++)
        {
            if ((*argv[i] - '0') <= 0 && (*argv[i] - '0') >= 9)
            {
                printf("Error\n");
                return 1;
            }
            a = a + (*argv[i] - '0');
        }
    }
    else
    {
        printf("0\n");
    }
    return 0;
}
