#include <stdio.h>
#include <string.h>
int main (void){
	char string[100],temp;

	int i,len,count=0;
	
	printf("Enter the string  : ");
	gets(string);
	len=strlen(string);

	for(i=0;i<len/2;i++){
			
		temp=string[i];
		string[i]=string[len-1-i];
		string[len-1-i]=temp;
	}
	
	printf("Reverse string is : ");
	
	printf("%s",string);

	

}	