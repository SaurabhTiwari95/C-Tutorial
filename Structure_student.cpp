#include<stdlib.h>
#include<stdio.h>
typedef struct student
	{
			int id;
			char name[20];
			float perentage;
	}stu;
	int main()
	{
		stu s1={20,"ABC",78.8};
		printf("ID=%d \nNAME=%s \nPercentage=%f",s1.id,s1.name,s1.perentage);
		return(0);
	}
