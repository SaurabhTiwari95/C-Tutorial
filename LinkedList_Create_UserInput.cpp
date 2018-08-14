/*Linked List Creation and Traversal with User Input*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
	struct node* head=NULL;
	struct node* new_node=NULL;
	struct node* previous=NULL;
	struct node* current=NULL;
void create()
{
	int new_no;
	printf("Enter the Number in the List\n");
	while(1)
	{
		scanf("%d\n",&new_no);
		fflush(stdin);
		if(new_no==0)
		{
			break;	
		}
		new_node=(struct node*)malloc(sizeof(struct node));
		if(head==NULL)
		{
			head=new_node;
			new_node->data=new_no;
			new_node->next=NULL;
			previous->next=new_node;
			previous=new_node;
		}
	}
}
void printList(struct node *n)
{
	while(n!=NULL)
	{
		printf("%d",n->data);
		n=n->next;
	}
}
int main()
{
	create();
	printList(head);
	return 0;
}
