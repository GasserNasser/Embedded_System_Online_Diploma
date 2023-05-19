#include <stdio.h>

int main (void){
	float x,y;
	char operator;
	printf("Enter operator either + or - or * or divide: ");
	scanf("%c",&operator);
	printf("Enter two operands: ");
	scanf("%f%f",&x,&y);	
	switch(operator){
		case '+':printf("%0.1f %c %0.1f = %0.1f",x,operator,y,x+y);
				break;
		case '-':printf("%0.1f %c %0.1f = %0.1f",x,operator,y,x-y);
				break;
		case '*':printf("%0.1f %c %0.1f = %0.1f",x,operator,y,x*y);
				break;
		case '/':printf("%0.1f %c %0.1f = %0.1f",x,operator,y,x/y);
				break;
								
	}
	
}