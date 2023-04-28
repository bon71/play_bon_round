#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int cmpfunc (const void *a, const void *b) {
  return *(char *)a - *(char *)b;
}

int main(int argc, char** argv){
	char *s1 = argv[1], *s2 = argv[2];
    int ln_s1 = strln(s1), ln_s2 = 0;
    while (s1[ln_s1] != '\0') ln_s1++;
    while (s2[ln_s2] != '\0') ln_s2++;

    if (ln_s1 > ln_s2){
        return (0);
    }
    qsort(s1, ln_s1, sizeof(char), cmpfunc);

    printf("s1 is %s\n", s1);

    char test[ln_s1];
    for (int start = 0; start < ln_s2 - ln_s1 + 1; start++){
        for (int i = 0; i < ln_s1; i++) {
            test[i] = s2[start + i];
        }
        qsort(test, ln_s1, sizeof(char), cmpfunc);

    printf("test is %s\n", test);

        if (strcmp(test, s1) == 0){
			printf("true\n");
			return (1);
		}
    }

    return (0);
}