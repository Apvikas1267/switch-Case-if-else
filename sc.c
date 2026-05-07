#include <stdio.h>

int main() {
    int password;
    int correctPassword = 123;
    int i;

    for(i = 1; i <= 3; i++) {

        printf("Enter Password: ");
        scanf("%d", &password);

        if(password == correctPassword) {
            printf("Login Allowed\n");
            return 0;   // stop program
        }
        else {
            printf("Invalid Password\n");
        }
    }

    printf("User Blocked\n");

    return 0;
}