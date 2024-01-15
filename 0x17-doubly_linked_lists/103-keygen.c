#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void generate_key(char *username) {
    unsigned int key = 0;
    int i;

    for (i = 0; username[i]; i++) {
        key += username[i];
    }

    printf("%u\n", key);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <username>\n", argv[0]);
        return EXIT_FAILURE;
    }

    generate_key(argv[1]);

    return EXIT_SUCCESS;
}

