/*Linked List Creation and Traversal with User Input*/
#include<stdio.h>
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
	while(1)
	{
		printf("Enter the Number in the List : ");
		scanf("%d",&new_no);
		if(new_no==0)
			break;
			
		new_node=(struct node*)malloc(sizeof(struct node));
		new_node->data=new_no;
		new_node->next=NULL;
		if(head == NULL)
		{
			head=new_node;
			//new_node->data=new_no;
			//new_node->next=NULL;
			//previous->next=new_node;
			previous=new_node;
		}
		else{
			previous->next=new_node ;
			previous = new_node ;	
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
	int a;
	printf("Press 1 for creating a LinkedList\n");
	printf("Press 2 for Insertion at the beginning\n");
	printf("Press 3 to insert at a given node\n");
	printf("Press 4 to insert at the end\n");	
	scanf("%d",&a);
	switch(a)
	{
		case 1: create();
		printList(head);
		break;
		case 2: printf("Code for insertion at the beginning!!");	//insert_begn()
		break;
		case 3: printf("Code for insertion at a given node!!");	//insert_begn()
		break;
		case 4: printf("Code for insertion at the end!!");	//insert_begn()
		break;
		default: printf("Wrong Choice press 0");
	}
	return 0;
}
