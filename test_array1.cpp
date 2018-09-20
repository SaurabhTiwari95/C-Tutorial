#include<stdio.h>
#include<conio.h>
int findmax(int arr[],int n)
{
	int i,max;
	max=arr[0];
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
			{
				max=arr[i];
			//	printf("Largest element=%d",arr[i]);
			}
			//else{
			//	printf("Largest element=%d",max);
		//	}
	}printf("Largest Element=%d",max);
}
int main()
{
	int i,arr[100],n;
	printf("Enter the Size of the array=");
	scanf("%d",&n);
	printf("Enter the elements in the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Elements of 1-D array are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	findmax(arr,n);
	return(0);
}
