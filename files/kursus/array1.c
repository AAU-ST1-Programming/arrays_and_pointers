#include <stdio.h>

int main()
{
    int numbers[4] = {2, 3, 5, 7};
    for (int i = 0; i < 4; i++)
    {
        printf("number[%i] = %i\n", i, numbers[i]);
    }
    return 0;
}
