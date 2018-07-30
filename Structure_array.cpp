#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct student
{
	int ID;
	char name[50];
	char subject[50];
}stu;
int main()
{
	int i;
	//stu arr[10];
	//scanf("%d %s %s",&stu.ID,stu.name,stu.subject[])
	stu stud[5];
	printf("Student details \n");
	for(i=0;i<3;i++)
	{
		//stud[i].ID=i+1;
		printf("Enter "/*the student*/" ID\t");
		scanf("%d",&stud[i].ID);
		fflush(stdin);
		printf("Enter "/*the student*/" Name\t");
		scanf("%s",stud[i].name);
		fflush(stdin);
		printf("Enter subject "/*of the student*/"\t");
		scanf("%s",stud[i].subject);
		fflush(stdin);
	}
	for(i=0;i<3;i++)
	{
		printf("Student_ID=%d\n",stud[i].ID);
		printf("Student_Name=%s\n",stud[i].name);
		printf("Student_Same=%s\n",stud[i].subject);		
	}
	return(0);
}
