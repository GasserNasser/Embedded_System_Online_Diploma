#include <stdio.h>

int main (void){
	char string[100];
	char c;
	int i,count=0;
	
	printf("Enter a string: ");
	gets(string	);
	printf("Enter a character to find frequency: ");
	scanf("%c",&c);
	for(i=0;string[i]!=0;i++){
		if(string[i]==c){
			count++;
		}
	}
	
	printf("Frequency of %c = %d",c,count);
	

}	