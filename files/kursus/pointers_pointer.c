
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    char **names = (char *)malloc(3 * sizeof(char *));
    names[0] = "Alice";
    names[1] = "Bob";
    names[2] = "Charlie";
    free(names);
    return 0;
}
