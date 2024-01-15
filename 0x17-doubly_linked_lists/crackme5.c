#include <stdio.h>
#include <string.h>

void check_password(char *password) {
    char buffer[64];
    strcpy(buffer, password);

    if (strcmp(buffer, "passw0rd") == 0) {
        printf("OK\n");
    } else {
        printf("Wrong password\n");
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s username key\n", argv[0]);
        return 1;
    }

    char *username = argv[1];
    char *key = argv[2];

    printf("Username: %s\n", username);
    printf("Key: %s\n", key);

    if (strcmp(username, "julien") == 0 && strcmp(key, "passw0rd") == 0) {
        printf("Congrats!\n");
    } else {
        check_password(key);
    }

    return 0;
}

