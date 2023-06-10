#include<stdio.h>



typedef struct{

	float real;
	float imaginary;
}complex;
complex sum(complex n1,complex n2){
	complex sum;
	sum.real=n1.real+n2.real;
	sum.imaginary=n1.imaginary+n2.imaginary;
	printf("Sum =%0.1ff+%0.1fi",sum.real,sum.imaginary);
}
int main(void){
	
	complex n1,n2;
	printf("For 1st complex number\n");
	printf("Enter real and imaginary respectively: ");
	scanf("%f%f",&n1.real,&n1.imaginary);
	printf("For 2nd complex number\n");
	printf("Enter real and imaginary respectively: ");
	scanf("%f%f",&n2.real,&n2.imaginary);
	sum(n1,n2);



}