#include <stdio.h>
int main(){
	int i=100;
	int sum = 0;
	while(i>=1){
		printf("%d\n",i);
		printf("%d\n",i*i);
		printf("%d\n",i*i*i);
		sum = sum +(i);
		i--;
	}
	printf("the sum is %d",sum);
	
	return 0;
}