#include <stdio.h>

int main (void){
	float arr[100],sum,avg;
	int i,n;
	
	printf("Enter the numbers of data: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("%d. Enter number: ",i+1);
		scanf("%f",&arr[i]);
		sum+=arr[i];
	}
	avg=sum/n;
	printf("Average = %.2f",avg);
	
	
}	