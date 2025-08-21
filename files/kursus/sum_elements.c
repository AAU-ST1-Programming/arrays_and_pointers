#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () 
{
    unsigned char x[5];
    time_t t;
   
    /* Intializes random number generator */
    srand((unsigned) time(&t));
   
    /* Intializes array x with random numbers */
    for (int i = 0; i < sizeof(x)/sizeof(x[0]); i++)
    {
        x[i] = rand()%256;
    }
   
    /* Print array elements */
    for (int i = 0; i < sizeof(x)/sizeof(x[0]); i++)
    {
        printf("x[%d] =  %d\n", i, x[i] );
    }
   
    /* Calculate sum of all array elements */
    for (int i = 0; i < sizeof(x)/sizeof(x[0]); i++)
    {
        // ???????
    }
   
    /* Calculate the average value of array x */
    // ???????
    
    /* Print the sum of all array elements */
    // ???????
    
    /* Print the average calue of array x */
    // ???????
    
    return 0;
}