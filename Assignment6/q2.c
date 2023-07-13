#include<stdio.h>

int main(void){
	char x='A';
	char *a=&x;
	for(int i=0;i<=25;i++){
		printf("%c ",*a+i);
	}
}