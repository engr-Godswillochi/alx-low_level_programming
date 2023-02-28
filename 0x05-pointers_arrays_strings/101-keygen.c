#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main-randim passord generator
 *return-void
 */

#define PASSWORD_LENGTH 10

int main() {
    char password[PASSWORD_LENGTH + 1];
    int i, random_num;

    srand(time(NULL)); // Seed the random number generator

    // Generate a random password
    for (i = 0; i < PASSWORD_LENGTH; i++) {
        random_num = rand() % 62; // Generate a random number between 0 and 61

        if (random_num < 26) {
            password[i] = 'a' + random_num; // Add a lowercase letter
        } else if (random_num < 52) {
            password[i] = 'A' + (random_num - 26); // Add an uppercase letter
        } else {
            password[i] = '0' + (random_num - 52); // Add a digit
        }
    }

    password[PASSWORD_LENGTH] = '\0'; // Add null terminator to the end of the string

    // Print the password
    printf("Password: %s\", password);

    return (0);
}
