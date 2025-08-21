#include <stdio.h>

int main()
{
    // declare and initialize array x and y
    int x[2] = {15,45};
    int y[2] = {11,12};
    
    // Add 10 to all elements in array y
	int size_of_y = sizeof(y)/sizeof(y[0]);
    for ( int i = 0 ; i < size_of_y;i++) // i<= ... will make you do a stack overflow (see x[0] in the original)
    {
        y[i] = y[i] + 10;
    }

    // print values of x
    printf("\nValues of x:\n");
    printf("x[0] = %d\n",x[0]);
    printf("x[1] = %d\n",x[1]);
    
    // print values of y
    printf("\nValues of y:\n");
    printf("y[0] = %d\n",y[0]);
    printf("y[1] = %d\n",y[1]);
    
    return 0;
}