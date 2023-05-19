#include <stdio.h>

int main (void){
	int a,b;
	printf("Enter value of a: ");
	scanf("%d",&a);	
	printf("Enter value of b: ");
	scanf("%d",&b);
	b=(a^b);
	a=a^b;
	b=b^a;

	printf("After swapping, value of a = %d\n",a);
	printf("After swapping, value of b = %d",b);	
}