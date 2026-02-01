/*
Description: A Program that diplays the water charges for a consumer 
Name:Shawn Mbithi
Reg No: BCS-03-0019/2026
*/

#include<stdio.h>
int main(){
	int units;
	float bill;
	
	//Prompt user for water units
	printf("Enter number of water units consumed;");
	scanf("%d",&units);
	// Calculate bill based on consumption
	if (units >=0 &&units <=30){
		bill = units *20.0;
		}else if(units <=60){
			bill = units *25.0;
		}else {
			bill = units * 30.0;
		}
		//Display total bill
		printf("Total water bill;%2f kes\n",bill);
			
	return 0;
}