#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Define Variables
    int n_leads = 3;
    int n_samples = 5;
    int **ecgData;

    // Allocate Memory for rows
    ecgData = malloc(n_samples * sizeof(int *));
    for (int i = 0; i < n_samples; i++)
    {
        ecgData[i] = malloc(n_leads * sizeof(int));
    }

    // Simlate ECG data
    for (int i = 0; i < n_samples; i++)
    {
        for (int j = 0; j < n_leads; j++)
        {
            ecgData[i][j] = 70 + i * 5 + j; // dummy data
        }
    }

    // Access Variables
    printf("Show ECG DATA:\nLead1, Lead2, Lead3, \n");
    for (int i = 0; i < n_samples; i++)
    {
        for (int j = 0; j < n_leads; j++)
        {
            printf("%5i, ", ecgData[i][j]);
        }
        printf("\n");
    }

    // Free Memory!
    for (int i = 0; i < n_samples; i++)
    {
        free(ecgData[i]);
    }
    free(ecgData);

    // Finished
    return 0;
}
