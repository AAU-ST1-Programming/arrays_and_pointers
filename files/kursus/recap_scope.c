#include <stdio.h>

int main()
{
    int modval = 16;
    for (int index = 0; index < 10; index++)
    {
        printf("modulus(%i,%i)=%i",index, index, modval, index%16);
    }
    

    printf("index er nu : %i", index);
    return 0;
}
