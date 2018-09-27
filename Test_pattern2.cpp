#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,m,n;
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
		//	if(j>1)
		//	{
				
				printf("%d",i);
				i++;
		//	}
		}
		printf("\n");
	}
	return(0);
}
