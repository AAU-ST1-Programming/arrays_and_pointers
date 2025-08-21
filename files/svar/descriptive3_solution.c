#include <stdio.h> /* printf */
#include <math.h>  /* pow, sqrt */

int main()
{
  int N_patients = 10;
  int N_measurements = 3;
  // definer en 2D float med størrelsen 3x10
  char *names[3] = {"Age", "Height", "Weight"};
  float measurements[3][10] = {{23., 35., 67., 42., 54., 18., 29., 72., 31., 88.},
                               {1.78, 1.62, 1.50, 1.90, 1.70, 1.55, 1.82, 1.60, 1.75, 1.85},
                               {70.5, 55.3, 60.2, 85.7, 72.4, 50.1, 68.9, 64.0, 75.3, 90.2}};

  float gennemsnit[3] = {0, 0, 0};
  float afvigelse[3] = {0, 0, 0};

  for (int i_meas = 0; i_meas < N_measurements; i_meas++)
  {
    // Udregn gennemsnittet af alder, højde og vægt, på patienter med værdierne til højre
    for (int i_patient = 0; i_patient < N_patients; i_patient++)
    {
      gennemsnit[i_meas] += measurements[i_meas][i_patient] / N_patients;
    }

    // Udregn standard afvigelse af alder, højde og vægt
    afvigelse[i_meas] = 0.0;
    for (int i_patient = 0; i_patient < N_patients; i_patient++)
    {
      // sum indeni (x[i]-mean)^2
      afvigelse[i_meas] += pow(measurements[i_meas][i_patient], 2);
    }
    afvigelse[i_meas] = sqrt(afvigelse[i_meas] / (N_patients - 1));
  }

  // Print descriptive tabel ud i terminalen (mean (std)) for alder, højde og vægt,
  printf("### Descriptive Table ###\n");
  for (int i_meas = 0; i_meas < N_measurements; i_meas++)
  {
    printf("  %s: %.2f (%.2f)\n", names[i_meas], gennemsnit[i_meas], afvigelse[i_meas]);
  }

  return 0;
}
