#include <stdio.h>

int main()
{

    float honsevaegt_over_tid[3][2] = {{0.01, 1.25}, {0.011, 1.31}, {0.007, 0.41}};
    for (int i_hone = 0; i_hone < 3; i_hone++)
    {
        for (int j_maaling = 0; j_maaling < 2; j_maaling++)
        {
            printf("%.3f, ", honsevaegt_over_tid[i_hone][j_maaling]);
        }
        printf("\n");
    }

    for (int i_hone = 0; i_hone < 3; i_hone++)
    {
        printf("####\nHoene: %i\n", i_hone);
        for (int j_maaling = 0; j_maaling < 2; j_maaling++)
        {
            printf("  Maaling %i, vaegt=%f\n", j_maaling, honsevaegt_over_tid[i_hone][j_maaling]);
        }
    }

    return 0;
}
