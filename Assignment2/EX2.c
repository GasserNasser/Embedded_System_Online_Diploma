#include <stdio.h>

int main (void){
	int c;
	printf("Enter an alphabet: ");
	scanf("%c",&c);

	if(c=='a' || c=='e' || c== 'i'|| c=='o' || c=='u'){
		printf("%c is vowel",c);
	}
	else{
		printf("%c is consonat",c);	
	}
}