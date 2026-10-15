#include <stdio.h>

int main()
{

    int months[3] = {0, 2, 4};
    float chicken[3][3] = {{0.05, 0.1, 0.12}, {2.2, 3.1, 1.4}, {2.2, 3.4, 2.0}};

    for (int m = 0; m < 3; m++)
    {
        printf("Weight at %i month: ", months[m]);

        for (int c = 0; c < 3; c++)
        {
            printf("%.2fkg ", chicken[m][c]);
        }
        printf("\n");
    }

    return 0;
}