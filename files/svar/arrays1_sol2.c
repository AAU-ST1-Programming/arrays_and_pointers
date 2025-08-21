#include <stdio.h>

int main(int argc, char const *argv[])
{
    int Numbers[] = {2, 3, 5, 7, 11, 13};

    int N = sizeof(Numbers) / sizeof(Numbers[0]);

    printf("Numbers: [");
    for (int i = 0; i < N; i++)
    {
        printf("%d,", Numbers[i]);
    }
    printf("]");
    return 0;
}
