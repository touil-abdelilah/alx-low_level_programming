#include <stdio.h>
#include <string.h>

void generate_key(char *username) {
    if (strcmp(username, "julien") == 0) {
        printf("passw0rd\n");
    } else {
        printf("Invalid username\n");
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s username\n", argv[0]);
        return 1;
    }

    char *username = argv[1];
    generate_key(username);

    return 0;
}

