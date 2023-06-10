#include<stdio.h>
#define PI 3.1415
#define Area(r) PI*r*r
int main(void){
	int rad;
	float area;
	printf("Enter the radius:");
	scanf("%d",&rad);
	area=Area(rad);
	printf("Area=%0.2f",area);

	
}	