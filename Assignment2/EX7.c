#include <stdio.h>

int main (void){
	int d,i,fact=1;
	printf("Enter an integer: ");
	scanf("%d",&d);
	if(d<0){
		printf("Error!!! Factorial of negative number doesn't exist.");
	}
	else if(d==0){
		printf("Factorial = %d",fact);
	}
	else{
		
		for(i=1;i<=d;i++){
		fact*=i;

		}
		printf("Factorial = %d",fact);		
	}



}