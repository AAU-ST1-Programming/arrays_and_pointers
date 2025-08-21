/*
Start
|
Initialize rows and columns
|
Create 2D array myArray
|
Initialize myArray with values
|
Calculate the number of rows and columns
|
Print "2D Array:"
|
For each row in myArray:
|   |
|   For each column in the row:
|   |   |
|   |   Print the element
|   |
|   Print newline
|
End

*/
#include <stdio.h>

int main() {
    int myArray[2][4] = {
        {7, 15, 1, 15},
        {99, 14, 2,1}
    };

    // Calculate the number of rows and columns
    int rows = sizeof(myArray) / sizeof(myArray[0]);
    int columns = sizeof(myArray[0]) / sizeof(myArray[0][0]);

    // Printing the contents of the 2D array
    printf("2D Array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", myArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}