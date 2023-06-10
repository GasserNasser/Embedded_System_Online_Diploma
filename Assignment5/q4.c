#include<stdio.h>
typedef struct{
	char name[50];
	int rollno;
	float marks;
}student;
int main(void){

	student x[10];
	int i=0;
	printf("Enter information of students:\n\n");
	for(i=0;i<10;i++){
		x[i].rollno=i+1;	
		printf("For roll number %d\n",x[i].rollno);
		printf("Enter name: ");
		scanf("%s",x[i].name);
	
		printf("Enter marks:");
		scanf("%f",&x[i].marks);

	}
	printf("\n\nDisplaying information\n");
	for(i=0;i<10;i++){
	
		printf("information for roll number %d\n\n",x[i].rollno);
		printf("Name: %s\n",x[i].name);
	
		printf("Marks: %0.1f\n\n",x[i].marks);
		

	}
	
}	