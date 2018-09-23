//C program to illustrate pointer arithetic

#include<stdio.h>
#include<conio.h>
int main()
{
	int a[4]={20,46,89,93};
	int *b;
	int i;
	b=a;
	for(i=0;i<=3;i++)
	{
		printf("Address of the variable\t=\t%p\n",b);
		printf("Value at that address\t=\t%d\n",*b);
		b++;
	}
/*
	printf("%d\n",b[0]);
	printf("%d\n",b[1]);
	printf("%d\n",b[2]);
	printf("%d\n",b[3]);
	//An array name acts like a pointer constant.The value of this pointer constant is the address of the first element
*/
	return(0);
}
