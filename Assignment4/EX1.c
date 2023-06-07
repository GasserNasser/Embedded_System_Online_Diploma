#include<stdio.h>

int main (void){
	
	int min =5,max=25,flag;
	printf("Enter two numbers(intervals): ");
	scanf("%d%d",&min,&max);
	printf("Prime numbers between %d and %d are: ",min,max);
	for (int i=min;i<=max;i++){
		flag=0;
		for(int z=2;z<=i/2;z++){
			if(i%z==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("%d ",i);
		}
		
		
	}
}