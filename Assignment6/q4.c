#include<stdio.h>

int main (void){
	int n;
	int arr[15];
	int *ptr = arr;
	printf("Input the number of elements to store in the array (max 15) : ");
	scanf("%d",&n);
	printf("Input %d number of elements in the array :\n",n);	
	for(int i=0;i<n;i++){
		printf("element -%d : ",i+1);
		scanf("%d",ptr+i);
	}
	printf("The elements of array in reverse order are :\n");
	ptr=&arr[n-1];
	for(int i=n;i>0;i--){
		printf("element -%d : %d\n",i,*ptr);
		ptr--;
		
	}

}