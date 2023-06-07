#include <stdio.h>
int Power(int x,int p){

	if(p==0){
		return 1;
		
	}
	else
	{
		return x*Power(x,p-1);
	}
}
int main (void){

	int x,p;
	
	printf("Enter base number: ");
	scanf("%d",&x);
	printf("Enter power number(positive integer): ");
	scanf("%d",&p);	
	printf("%d^%d = %d",x,p,Power(x,p));
	
	
	
	
	
}	