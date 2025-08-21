#include <stdio.h>
int main(int argc, char const *argv[])
{
    int array[] = {51, 3, 61, -31};
    int *p = (int *)array;
    for (int i = 0; i < 4; i++)
        printf("%i ,", p[i]);
    printf("\n");
    return 0;
}
