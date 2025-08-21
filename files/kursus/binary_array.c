#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int number;
	int num_bits_to_print;
	printf("input a integer number: ");
	scanf("%d", &number);

	// algorithm to get number of bits necessary to contain number
	num_bits_to_print = log2(abs(number)) + 1;

	printf("\nnumber=%d, in binary=", number);
	while (number) {
    if (number & 1)
        printf("1");
    else
        printf("0");

    number >>= 1;
}
printf("\n");
	printf(".\n");
}
