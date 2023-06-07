#include <stdio.h>
int fact(int x){
	if(x==0){
		return 1;
		
	}
	else{
		return xs*fact(x-1);
	}
}
int main (void){
	
	int i,n;
	
	printf("Enter an positive integer: ");
	scanf("%d",&n);
	
	printf("Factorial of %d = %d",n,fact(n));
	
	
}	