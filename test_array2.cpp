#include<stdio.h>
#include<conio.h>
int findmax(int arr[][150], int n,int m)
{
	int i,j,max;
	max=arr[0][0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(max<arr[i][j])
			{
				max=arr[i][j];
			}
		}
	}printf("Largest Element=%d",max);
}
int main()
{
	int i,j,n,m,arr[100][150];
	printf("Enter the number of rows and columns in the array=");
	scanf("%d \t %d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	findmax(arr,n,m);
	return(0);
}
