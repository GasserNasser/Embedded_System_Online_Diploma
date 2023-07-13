#include <stdio.h>
#include <string.h>
int main(void){
	char i=0;
	char x[50];
	char *ptr=x;
	printf("Input a string : ");
	gets(x);
	while(ptr[i]!='\0'){
		i++;
	}
	
	for(int z=0;z<i/2;z++){
		int temp=ptr[z];
		ptr[z]=ptr[i-1-z];
		ptr[i-1-z]=temp;
	}
	printf("Reverse of the string is : %s",x);
}