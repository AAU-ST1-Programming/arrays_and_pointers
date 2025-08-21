#include <stdio.h>

int main()
{
    int num;
    int *p_num = &num;

    *p_num = 13;
    printf("address: 0x%p, value: %i\n", p_num, *p_num);
    return 0;
}
