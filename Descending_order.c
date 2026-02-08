/*
Description:A Program that prints all numbers from 100 to 50 in a descending 
order
Name: Shawn Mbithi
Reg No:BCS-03-0019/2026
*/
#include <stdio.h>

int main() {
	int i; 
	i =100;
	i >=50;
    // The loop starts at 100
    // It continues as long as i is greater than or equal to 50
    // i-- subtracts 1 from the value after each iteration
    for ( i = 100; i >= 50; i--) {
        printf("%d\n", i);
    }

    return 0;
}