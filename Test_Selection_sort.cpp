#include<stdio.h>
#include<conio.h>
int selection_sort(int arr[],int n)
{
	int i,j,min,min_index=-1;
	int temp ;
	min=arr[0];
	min_index=0;
	for(i=0;i<n;i++)
	{
		temp =-1 ;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<min)
			{
				min=arr[j];
				min_index=j;
			}
		}
		temp = arr[i];
		arr[i]=arr[min_index];
		arr[min_index]=temp ;
	}
}
int main()
{
	int n,i,arr[150];
	printf("Enter the size of array=");
	scanf("%d",&n);
	printf("Enter elements in the Unsorted array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,n);
	printf("The Unsorted elements of the array are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return(0);
}
