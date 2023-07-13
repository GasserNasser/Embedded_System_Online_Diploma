#include<stdio.h>

int main(void){
	int m=29;
	int *ab;
	printf("Address of m : 0x%x\n\n",&m);
	printf("value of m : %d\n\n",m);
	ab=&m;
	printf("Now ab is assigned with the address of m.\n\n");
	printf("Address of pointer ab : 0x%x\n\n",ab);
	printf("Content of pointer ab : %d\n\n",*ab);
	
	m=34;
	printf("The value of m assigned to %d now.\n\n",m);
	printf("Address of pointer ab : 0x%x\n\n",ab);
	printf("Content of pointer ab : %d\n\n",*ab);
	
	
	*ab=7;
	printf("The pointer variable ab is assigned with the value %d now..\n\n",*ab);
	printf("Address of pointer m : 0x%x\n\n",&m);
	printf("Value of m : %d\n\n",m);
}