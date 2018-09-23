#include<stdio.h>
#include<conio.h>
int insert_sort(int arr[],int n)
{
	int num,i,j;
	for(i=1;i<n;i++)
		{
			num=arr[i];
			for(j=i;j>0&&arr[j-1]>num;j--)
			//printf("\n%di=\t",i);
			//printf("\n%dj=\t",j);
			arr[j]=arr[j-1];
		
			arr[j]=num;
				//if(arr[j+1]<arr[j])
				//{
				//	arr[j+1]=arr[j];
					//int temp=arr[j+1];
					//arr[j+1]=arr[j];
					//arr[j]=temp;
					//arr[j+1]=arr[j];
			printf("J = %d",j);	
		}//arr[j+1]=num;
	printf("\nThe Elements of sorted array are=\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
/*int insert_sort(int arr[],int n)
{
	int temp;
	int i,j;
	for(i=1;i<n;i++)
	{
		j=i;
		while(j>=0)
		{
			if(arr[j-1]>arr[j])
			{
					temp=arr[j-1];
					arr[j-1]=arr[j];
					arr[j]=temp;
			}else
			{
				break;
			}
			j--;
		}
*/		/*for(j=i-1;j>=0;j--)
		{
			if(arr[j-1]>arr[j])
			{
				arr[j-1]=arr[j];
			}else
			break;
		}
		
	}
	printf("The Sorted array is:\n");
	for(i=1;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
/*
int insert_sort(int arr[],int n)
{
	int index,i,j,num;
	num=arr[index];
	printf("Enter the index:");
	scanf("%d",&index);
	for(i=0;i<n;i++)
	{
		for(j=index-1;j<=0;j--)
		{
			arr[j+1]=arr[j];
		}
	}arr[j+1]=arr[index];
	printf("The Sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}*/
/*
int main()
{
	int arr[100],i,n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements of the Unsorted array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d\t",&arr[i]);
	}
	printf("The elements of the Unsorted array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	//insert_sort(arr,n);
	return(0);
}
*/
int main()
{
	int arr[100],n,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements in the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Unsorted Elements of the array are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	insert_sort(arr,n);
	return(0);
}
