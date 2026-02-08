/*
Description:A Program that prompts the user for a correct password
Name: Shawn Mbithi
Reg No:BCS-03-0019/2026
*/
#include <stdio.h>

int main() {
    int password; 
	// Variable to store user input

    do {
        printf("Enter the password: ");
        scanf("%d", &password);

        // If the password is wrong, the loop will repeat
        if (password != 1234) {
            printf("Incorrect. Try again.\n\n");
        }

    } while (password != 1234); // Loop continues as long as password is NOT 1234

    printf("Access Granted\n");

    return 0;
}