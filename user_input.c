/*
Name:Shawn Mbithi
Description: Program to compute bankbalance
*/
#include<stdio.h> 
int main() {
	//
	float height;
	double bankbalance;
	char phoneNumber[20];//Using string to accomodate leading zeros or long numbers
	printf("Enter Your Height(in meters or centimeters)");
	scanf("%f", &height);
	printf("Enter your bankbalance(in kenya shillings)");
	scanf("%lf",&bankbalance);
	printf("Enter your phoneNumber:");
	scanf("%s",phoneNumber);//%s handles string input
	printf("\n---User Details---\n");
	printf("Height:%2f\n",height);
	printf("BankBalance:%2lf KES\n",bankbalance);
	printf("PhoneNumber:%s\n",phoneNumber);
	
	return 0;
} 

	 
