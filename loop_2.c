//Program to increment numbers from 1 to 100
#include <stdio.h>
int main(){
	int i;
	int sum = 0;
	for(i=1;i<=100;i++){
		printf("%d\n",i);
		printf("%d\n",i*i);	
		printf("%d\n",i*i*i);
		sum = sum + (i*i);
	}
	printf("the sum of squares is %d", sum);
	return 0;
}