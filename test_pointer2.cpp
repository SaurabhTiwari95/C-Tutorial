#include<stdio.h>
#include<conio.h>
int main()
{
	int x=10;
	int *ptr;
	ptr=&x;
	printf("%p\t",ptr);
	printf("%d\n",*ptr);
	*ptr=245;
	printf("After Changing the address of *ptr=245,*ptr= %d",*ptr);

	return 0;
}
