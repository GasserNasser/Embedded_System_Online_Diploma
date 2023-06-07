#include <stdio.h>
int Rev(char *x){

	if(*x!='\0'){
		Rev(x+1);
		printf("%c",*x);
		
	}
}
int main (void){
	char x[20];
	int i,n;
	
	printf("Enter a sentnece: ");
	gets(x);
	Rev(x);
	
	
	
	
	
}	