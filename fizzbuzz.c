#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <limit>\n", argv[0]);
        return 1;
    }

    int limit = atoi(argv[1]);
    char buffer[50];

    for (int i = 1; i < limit; i++) {
        buffer[0] = '\0';

        // writes fizz if it's divisible by 3
        if (i % 3 == 0) {
            strcat(buffer, "fizz");
        }
        // writes buzz if it's divisible by 5
        if (i % 5 == 0) {
            strcat(buffer, "buzz");
        }
        // if neither fizz or buzz prints number
        if (buffer[0] == '\0') {
            sprintf(buffer, "%d", i);
        }

        printf("%s\n", buffer);
    }

    return 0;
}
