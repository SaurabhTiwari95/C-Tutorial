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
void push( struct node** head,int new_no)
{
//	int new_no;
	struct node* new_node=(struct node*) malloc(sizeof(struct node));//allocate memory
	new_node->data=new_no;//assign the data part
	new_node->next=(*head);//make next of ne_node as head
	(*head)=new_node;//move the head to point to the new_node
	 
}
void insertAfter(struct node* previous,int new_no)
{
	if(previous==NULL)//Check if the previous node is null
	{
		printf("The given previous node can not be NULL");
		return;
	}
	struct node* new_node=(struct node*)malloc(sizeof(struct node));//allocate the new_node
	new_node->data=new_no;//put in the data
	new_node->next=previous->next;//make next of new_node as next of prev_node
	previous->next=new_node;//move next of the prev_node as new_node
}
void append(struct node** head_ref, int new_data)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	struct node *last=*head_ref;
	new_node->data=new_data;
	new_node->next=NULL;
	if(*head_ref==NULL)
	{
		*head_ref=new_node;
		return;
	}
	while(last->next!=NULL)
		last=last->next;
		last->next=new_node;
		return;
}
void printList(struct node *n)
{
	while(n!=NULL)
	{
		printf("%d\t",n->data);
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
		printf("\n");
		case 2: push(&head,7);//printf("Code for insertion at the beginning!!"); //push()
		printList(head);
		printf("\n");
		case 3:	insertAfter(head->next,4);//printf("Code for insertion at a given node!!");	//insertAfter()
		printList(head);
		printf("\n");
		case 4: append(&head,19);
		printList(head);//insert_end()
		printf("\n");
		default: printf("Wrong Choice press 0");
	}
	return 0;
}
