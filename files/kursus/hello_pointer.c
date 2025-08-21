#include <stdio.h>

int main(int argc, char const *argv[]) // Martin WTF???@# er det
{
    /* code */
    int num = 10;
    int* p_num = &num;

    num = 346;
    *p_num = 20;

    printf("Value of num: %d  ", *p_num);
    return 0;
}
