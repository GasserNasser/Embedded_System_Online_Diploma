#include <stdio.h>

int main (void){
	float arr1[2][2];
	float arr2[2][2];
	float sum[2][2];
	int i,j;
	printf("Enter the elements of 1st matrix \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter a%d%d: ",i+1,j+1);
			scanf("%f",&arr1[i][j]);
		}
	}
	
	printf("Enter the elements of 2nd matrix \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter a%d%d: ",i+1,j+1);
			scanf("%f",&arr2[i][j]);
			sum[i][j]=arr1[i][j]+arr2[i][j];
		}

	}
	printf("Sum of Matix:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%0.1f\t",sum[i][j]);

		}
		printf("\n");
	}
	
}	