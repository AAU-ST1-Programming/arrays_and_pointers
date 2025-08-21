/** Denne fil er lavet i forbindelse med en panopto video.
 * Vi benytter her int argc, char const *argv[], som vi aldrig har gjort før.
 * Se pantopto videoen
 */

#include <stdio.h>  /* printf */
#include <stdlib.h> /* atof */

int main(int argc, char const *argv[])
{
    int N = argc - 1;

    float sum = 0.0, *measurements;
    measurements = (float *)malloc(sizeof(float) * N);

    printf("argc = %i\n", argc);
    for (int i = 1; i < argc; i++)
    {
        printf("argv[%i] = %s\n", i, argv[i]);
        measurements[i - 1] = atof(argv[i]);
    }

    for (int i = 0; i < N; i++)
    {
        sum += measurements[i];
    }

    printf("Sum is %.1f", sum);

    free(measurements);
    return 0;
}
