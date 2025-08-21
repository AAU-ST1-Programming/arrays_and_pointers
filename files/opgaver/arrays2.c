#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int *my_array;
    int dynamic_array_size;
    int Max_array_size = 10;
    time_t t;

    /* Intializes random number generator */
    srand((unsigned)time(&t));

    /* Create random number between 1 and Max_array_size*/
    dynamic_array_size = 1 + rand() % Max_array_size;
    printf("dynamic_array_size = %d\n", dynamic_array_size);

    /* Initial memory allocation */
    my_array = (int *)malloc(dynamic_array_size * sizeof(int));
    for (int i = 0; i < dynamic_array_size; i++)
    {
        my_array[i] = rand() % 256;
    }

    /* Print memory content */
    for (int i = 0; i < dynamic_array_size; i++)
    {
        printf("%d ", my_array[i]);
    }

    /* Free memory allocation */
    free(my_array);

    return (0);
}