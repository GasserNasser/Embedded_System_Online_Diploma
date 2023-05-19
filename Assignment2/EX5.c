#include <stdio.h>

int main (void){
	char c;
	printf("Enter a character: ");
	scanf("%c",&c);

	if(   (c>=97 && c<=122) || (c>=65 && c<=90)  ){
		printf("%c is an alpahbet",c);

	}	
	else{
		printf("%c is not an alphabet",c);		
	}
}