#include <stdio.h>

int main (void){
	float a;
	printf("Enter a number: ");
	scanf("%f",&a);

	if(a==0){
		printf("you entered zero");

	}
	else if(a>0){
		printf("%f is positive",a);	
	}
	else{
		printf("%f is negative",a);		
	}
}