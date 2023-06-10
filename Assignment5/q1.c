#include<stdio.h>
typedef struct{
	char name[50];
	int rollno;
	float marks;
}student;
int main(void){

	student x;
	printf("Enter information of students:\n");
	printf("Enter name: ");
	scanf("%s",x.name);
	printf("Enter roll number: ");
	scanf("%d",&x.rollno);	
	printf("Enter marks:");
	scanf("%f",&x.marks);
	printf("Displaying information\n");
	printf("name: %s\n",x.name);
	printf("Roll: %d\n",x.rollno);
	printf("MArks: %0.2f\n",x.marks);
}