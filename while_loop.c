//Program to run a while loop
#include <stdio.h>
int main (){
	int i=1;
	int sum = 0;
	while(i<=100){
		printf("%d\n",i);
		printf("%d\n",i*i);
		printf("%d\n",i*i*i);
		sum = sum + (i);
		i++;
	}
	printf("the sum is %d",sum);
	
	
	return 0;
}
