#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    // counting until \0 vs sizeof.
    int i = 0;
    int j = 0;
    printf("argc is %d\n", argc);
    while (argv[i] != (void *)0)
    {
        printf("argv[%d] is %s\n", i, argv[i]);
        i++;
    }
    printf("===========\n");
    while (argv[1][j] != '\0')
    {
        j++;
    }
    printf("sizeof(argv[]) is %lu\n", sizeof(argv));
    printf("while-count until null is %d\n", i);
    printf("sizeof(argv[1]) is %lu\n", sizeof(argv[1]));
    printf("while-count until null is %d\n", j);

    // strdup
    char *s, *t;

    s = strdup(argv[1]);
    printf("===========\nstrdup test\n\n");
    printf("s = %s\n", s);
    free(s);
}
