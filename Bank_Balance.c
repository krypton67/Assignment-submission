/*
Description:A Program that displays balance after every withdrawal 
Name: Shawn Mbithi
Reg No:BCS-03-0019/2026
*/
#include <stdio.h>

int main() {
    float balance;
    float withdrawal;

       printf("Enter initial account balance: ");
    scanf("%f", &balance);
      while (balance > 0) {
        printf("\nYour current balance is: %.2f\n", balance);
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdrawal);

        balance = balance - withdrawal;

        printf("Withdrawal successful. Remaining balance: %.2f\n", balance);
    }

      printf("\nYour balance has reached zero or is negative. Account closed.\n");

    return 0;
}