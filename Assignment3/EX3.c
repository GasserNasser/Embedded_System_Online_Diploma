#include <stdio.h>

int main (void){
	int mat[100][100];
	int tran[100][100];

	int i,j,r,c;
	printf("Enter rows and column of matrix:");
	scanf("%d%d",&r,&c);
	printf("Enter elements of matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter elemnts a%d%d: ",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	}
	
	printf("Entered matrix: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",mat[i][j]);

		}
		printf("\n");

	}
	printf("Transpose of Matrix:\n");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			tran[i][j]=mat[j][i];
			printf("%d\t",tran[i][j]);
		}
		printf("\n");
	}
	
}	