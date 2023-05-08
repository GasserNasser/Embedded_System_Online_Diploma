#include <stdio.h>

int main (void){
	int d,i,sum=0;
	printf("Enter an integer: ");
	scanf("%d",&d);

	for(i=1;i<=d;i++){
		sum+=i;

	}
	printf("Sum = %d",sum);
}