#include<stdio.h>
#include<conio.h>
int quad()
{
	int n,i,j,k;
	//int i,j,k,n;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=n-i;k>0;k--)
		{
			printf(" ");
		}
		for(j=2*i+1;j>0;j--)
		{
			if(j%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
	for(i=n-2;i>=0;i--)
	{
		for(k=n-i;k>0;k--)
		{
			printf(" ");
		}
		for(j=2*i+1;j>0;j--)
		{
			if(j%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
}
int boolean_pattern()
{
	int i,j,k,n;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=n-i;k>0;k--)
		{
			printf(" ");
		}
		for(j=2*i+1;j>0;j--)
		{
			if(i%2==0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
	
}
int main()
{
	boolean_pattern();
	quad();
	return(0);	
}


