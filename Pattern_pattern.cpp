#include<stdio.h>
#include<conio.h>
int half_pyramid()
{
int i,j,n;
	printf("\tEnter the size of the loop:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j>0;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
int half_bluf_pattern()
{
	int i,j,n;
	printf("Enter the size of the loop:");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=i;j>0;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
int pyramid()
{
	int j,i,k,n;
	//int j=((2*i)+1);
	printf("Enter the size of the row:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(k=n-i;k>0;k--)
		{
			printf(" ");
		}
		for(j=(2*i+1);j>0;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
int bluf_pattern()
{
	int j,i,k,n;
	//int j=((2*i)+1);
	printf("Enter the size of the row:");
	scanf("%d",&n);
	for(i=n;i>=0;i--)
	{
		for(k=n-i;k>0;k--)
		{
			printf(" ");
		}
		for(j=(2*i+1);j>0;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	
}
int time_glass_pattern()
{
	int j,i,k,n;
	//int j=((2*i)+1);
	printf("Enter the size of the row:");
	scanf("%d",&n);
	for(i=n;i>=0;i--)
	{
		for(k=n-i;k>0;k--)
		{
			printf(" ");
		}
		for(j=(2*i+1);j>0;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
		{
			for(k=n-i;k>0;k--)
			{
				printf(" ");
			}
			for(j=(2*i+1);j>0;j--)
			{
				printf("*");
			}
			printf("\n");
		}
}
int main()
{
	int a,i;
	printf("Press 1 for Half Pyramid Function:\n");
	printf("Press 2 for Half BLUF Function:\n");
	printf("Press 3 for Pyramid Function:\n");
	printf("Press 4 for BLUF Function:\n");	
	printf("Press 5 for Time_glass Pattern Function:\t");	
	printf("Press 0 to Exit:");	
	scanf("%d",&a);
	switch(a)
	{
		case 1: half_pyramid();
		break;
		case 2: half_bluf_pattern();
		break;		
		case 3: pyramid();
		break;		
		case 4: bluf_pattern();
		break;		
		case 5: time_glass_pattern();
		break;		
		default : printf("Wrong Choice");	
	}
	return(0);
}
