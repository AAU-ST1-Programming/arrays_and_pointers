
    // Finished
    for (int i = 0; i < n_samples; i++)
    {
        free(ecgData[i]);
    }

    free(ecgData);