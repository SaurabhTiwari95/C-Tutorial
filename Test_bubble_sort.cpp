#include<stdio.h>
#include<conio.h>
int swap(int *a,int *b)
{
	int temp;
		temp=*a;
		*a=*b;
		*b=temp;
}
int bubble_sort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)//(n-1) bcz there isn't any element left to compare it to the nth element
					//so the count goes to the (n-1)th element only and compares it to the last element(n)
	{
		for(j=0;j<n-i-1;j++)
		if(arr[j]>arr[j+1])
		swap(&arr[j],&arr[j+1]);
	}
}
int main()
{
	int arr[100],n,i,j;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
/*	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}	*/
	bubble_sort(arr,n);
	printf("\nThe sorted array is below:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	return(0);
}
