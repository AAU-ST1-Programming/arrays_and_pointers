// The for loop

#include <stdio.h>

int main()
{
    int min = 10, max = 15, step = 1;

    for (int i = min; i < max; i += step)
    {
        printf("i: %i\n", i);
    }
    char array[] = {'M', 'a', 'r', 't', 'i', 'n', '\0'};

    // How to calculate the length of an array (IF STACK ALLOCATED!!!!!)
    int lenth_of_array = sizeof(array) / sizeof(array[0]);
    return 0;
}
