
#include <stdio.h> /* printf */

int main(int argc, char const *argv[])
{
    int arr[] = {151, 123, 7, 1, -31, 0, 17, 9921, 9, 15, -1003, -3, 17};
    int sum = 0;
    int N = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < N; i++)
        sum += arr[i];
    int gennemsnit = sum / N;

    printf("Gennemsnit: %i\n", gennemsnit);

    return 0;
}
