#include <stdio.h>
#include <string.h>

void generate_key(char *username) {
    if (strcmp(username, "julien") == 0) {
        FILE *file = fopen("100-password", "w");
        if (file != NULL) {
            fprintf(file, "passw0rd");
            fclose(file);
        } else {
            printf("Error: Couldn't open the file for writing.\n");
        }
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

