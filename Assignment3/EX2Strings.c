#include <stdio.h>

int main (void){
	char string[100];

	int i,count=0;
	
	printf("Enter a string: ");
	gets(string	);
	

	for(i=0;string[i]!=0;i++){
			
		count++;
			
	}
	
	printf("Length of string: %d",count);
	

}	