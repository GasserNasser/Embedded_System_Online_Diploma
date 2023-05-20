#include <stdio.h>

int main (void){
	int arr[100];


	int i,n,element;
	printf("Enter no of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the element to be searched : ");
	scanf("%d",&element);

	
	for(i=0;i<n;i++){
		if(arr[i]==element){
			printf("Number found at the location = %d",i+1);
			break;
		}

	}

}	