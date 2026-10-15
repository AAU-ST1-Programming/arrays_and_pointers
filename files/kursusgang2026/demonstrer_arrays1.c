#include <stdio.h>

int main()
{
    int array1[5] = {'a', 'c', 'X', '1', '3'};
    int array2[5] = {'g', 1351223, 'h', 1, 0};
    int array3[50000000];
    printf("Hukomelsesaddresserne: array1: %p ... vaerdi på index 0: %i \n\n", array1, array1[0]);

    for (int i = 0; i < 5; i++)
    {
        array3[i] = array1[i] + array2[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%i\n", array3[i]);
    }

    return 0;
}