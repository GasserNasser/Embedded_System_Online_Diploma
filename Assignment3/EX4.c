#include <stdio.h>

int main (void){
	int arr[100];


	int i,n,element,loc;
	printf("Enter no of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the element to be inserted : ");
	scanf("%d",&element);
	printf("Enter the location : ");
	scanf("%d",&loc);
	
	for(i=n;i>loc;i--){
		arr[i]=arr[i-1];
	}
	arr[loc]=element;
	n++;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}	