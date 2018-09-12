# C-Tutorial
C-tutorials,C-codes and NOTES
## Structures
It is a collection of elements with different datatypes which are called **members of structures**.
### How to implement structures??
  * Define Structure
  * Declare structure variable
  * Initialize the members of structures
  * Accessing the members of the structures
### Syntax for the structure
```
/*If we write the TagName then we can create infinte numbers of structure 
variables in the program whenever we need*/

 struct Tagname                    
    {
      dataType variableName1;
      dataType variableName2;
      dataType variableName3;
    };
```
```
/*Tagname is optional which means without using structure variable we can 
create structure but all the structure variables should be declared in the structure*/

struct                    
  {
    dataType variableName1;
    dataType variableName2;
    dataType variableName3;
  }structure Variable1,structure variable2,....;
```
### EXAMPLE
```
struct student           //Definition of the structure
{
 int id;
 char name;
 float percentage;
 };
 struct student S1,S2;     //declaration of the structure whic contains the structure of variables
```
```
struct
{
 int id;
 char name;
 float percentage;
 }S1,S2;
```
### Initiatization of Structures
#### Compile TIME initialization Using Assignment operator
```
struct student S1={20,"ABC",75.5};
struct student S2={17,"XYZ",78.4};
             OR
S1.id=20
```
### How to ACCESS the members of the structure
By Using **DOT(.)** operator we cannot access the structure directly in order to access the structure we require the structure variable and the DOT(.) operator.
#### RUN TIME initialization Using SCANF
```
scanf("%d %s %f",&S1.id,S1.name,&S1.percentage);
scanf("%d %s %f",&S2.id,S2.name,&S2.percentage);
```
```
EXAMPLE of Students structure with detals like ID,name and percentage
struct student
 {
  int id;
  char name[20];
  float percentage;
 };
 int main()
 {
  struct student S1={20,"ABC",78.3}; //COMPILE time initialization
  struct student S2;                 //RUN time initialization
  printf("Enter the details of the student S2");
  scanf("%d %s %f",&S2.id,S2,name,&S2.percentage)
  return(0);
 }
```

## POINTERS
*-->>Value operator
&(ampersand)-->>address operator
#### Pointer variable is a variable which holds the address of another variable
### EXAMPLE
```
int a
int *p
p=&a
```
1. Define structure
2. Declare structure
3. Declare pointer variable
4. Initialize
5. Access the members(using arrow(**->**)operator)
```
struct student
{
 int roll_no.;
 char name[20];
 float percentage
 };
 main()
 {
  struct student S1;  //Declaration
  struct student *ptr;   //Declaration
  ptr=&S1;  //initialization
  printf("Enter Rollno.");
  scanf("%d",&S1.roll_no.)
  printf("Enter NAME");
  scanf("%s",&S1.name)
  printf("Enter Percentage");
  scanf("%f",&S1.percentage);
  printf("Roll No.=%d",ptr->roll_no.);
  printf("Name.=%d",ptr->name);
  printf("Percentage=%f",ptr->percentage);
  }
  ```
  [POINTERS-CS50](https://www.youtube.com/watch?v=XISnO2YhnsY)
  
  1. Pointers provide an alternative way to pass data between functions.
  2. If we use pointers instead we have the power to pass the variable itself.
  ### Different datatypes have different size in the memory(RAM)
  | Data Types | Size[in bits] |
  | --- | --- |
  | int | 4 |
  | char | 1 |
  | float | 4 |
  | double | 8 |
  | long long | 8 |
  | string | ?? |
  
  1. A pointer is a data item whose value is the memory addess
  2. Type of pointer describes the type of data we may find on the address.
  3. Pointers allow us to pass/share  variables between the functions not copies of them.
  4. Pointers are nothing more than an address in  the memory.
  ### NULL Pointer
  1. When the value of the pointer is not set to something meaningful then it should be set as NULL.
  2. We can check whether the pointer is NULL using the equality operator(=).
  3. This pointer points to nothing.
  ```
  int k;
  k=5; //*pk=35 means k=35,here * is the dereference operator which changes the value of variable k
  int* pk;
  pk = &k;
  ```
  &k= It is the address of **int k**
  #### **Another Example**:if arr is an array of dubles, then &arr[i](is where in memory the i<sup>th</sup> element  of arr[] exists) 
  #### is a pointer to doubles whose value is the address of the i<sup>th</sup> element of arr.
  If **X** is an int-type variable then **&x** is a pointer to int-whose value is the address of **x**.
  The name of the array is actually pointer to the first element of the array.
  The main purpose of a pointer is to allow us to modify or inspect the location to which it points which is called **dereferencing
  where we go to the reference and change the value there**. 
  Used in this context * is known as a **deference operator**.
  #### What happens if we try to dereference a pointer whose value is NULL??
  It causes **Segmentation fault** which defends against accidental dangerous manipulation of unknown pointers.
  
  ## LINKED LIST
  [LINKED LIST-0](https://www.youtube.com/watch?v=ge8iG7JecR4&t=318s)
  1. Like array, linked list is a linear data structure.
  2. Unlike arrays, linked list elements are not stored at contiguous location; the elements are linked using pointers.
  3. A linked list is represented by a pointer to the first node of the linked list.The first node is called head.
  4. If linked list is   empty then value of head is **NULL**.
  ### Represenation in C
  ```
  // A simple C program to introduce a linked list
  #include<stdio.h>
  #include<stdlib.h>
  struct node
  {
   int data;
   struct node *next;
   };
  ```
  ```
  struct node* head=NULL;
  struct node* second=NULL;
  struct node* third=NULL;
  //allocate 3 nodes in the heap
  head=(struct node*)malloc(sizeof(stuct node);
  second=(struct node*)malloc(sizeof(stuct node);
  third=(struct node*)malloc(sizeof(stuct node);
  
  /* Note that only head is sufficient to represent the whole list.We can traverse the complete list by following next pointers */
  ```
  ```
  //This function prints the contents of linked list starting from the given node
  void printList(struct  node *n)
  {
   while(n!=  NULL)
    {
     printf("%d",n->data);
     n=n->next;
    }
  }
  ```
### Time Complexity for push() is O(1) as it does constant amount of work
```
void push( struct node** head,int new_no)
{
/*program is used for insertion at the beginning of Linked List*/
//	int new_no;
	struct node* new_node=(struct node*) malloc(sizeof(struct node));//allocate memory
	new_node->data=new_no;//assign the data part
	new_node->next=(*head);//make next of ne_node as head
	(*head)=new_node;//move the head to point to the new_node	 
}
```
### Time Complexity for insertAfter() is O(1) as it does constant amount of work
```
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
```


## STACK
Stack is a linear data structure which follows a particular order in which the operations are performed.
The order may be LIFO(Last In First Out) or FILO(First In Last Out).
#### Opeartions performed in STACK
1. PUSH (Adds an item in the stack.If the stack is full then it is said as OVERFLOW condition)
2. POP (Removes an item from the stack.If the stack is empty then it is said as UNDERFLOW condition)
3. Peek or Top
4. isEmpty
#### Time Complexities of operations of Stack:
push(),pop(),isEmpty() and peek() all take O(1)time.We do not run any loop in any of these operations.
#### Aplications of Stack:
...
...
...
#### Implementation:
1. Using array
2. Using Linked List
```
// C program for implementation of stack using arrays
#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<limits.h>
// A structure to represent a stack
struct stack
{
    int top;
    unsigned capacity;
    int* array;
};
//Function to create the stack of the given capacity.It initializes the size of stack
//stack as 0
struct stack* createStack(unsigned capacity)
{
    struct stack* stack=(struct stack*)malloc(sizeof(struct stack));
    stack->capacity=capacity;
    stack->top=-1;
    stack->array=(int*)malloc(stack->capacity*sizeof(int));
    return stack;
}
//stack is full when top is equal to the last index
int isFull(struct stack* stack)
{
    return stack->top==stack->capacity-1;
}
//stack is empty when top is equal to -1
int isEmpty(struct stack* stack)
{
    return stack->top==-1;
}
void push(struct stack* stack,int item)
{
    if(isFull(stack))
    return;
    stack->[++stack->top]=item;
    printf(¨%d pushed to the stack\n¨,item);
}
//Function to remove an item from stack.It decreases top by -1
int pop(struct stack* stack)
{
    if(isEmpty(stack))
    return INT_MIN;
    return stack->array[stack->top--];
}
int peek(struct stack* stack)
{
    if(isEmpty(stack))
    return INT_MIN;
    return stack->array[stack->top];
}
int main() {
	struct stack* stack=createStack(100)
	push(stack,10);
	push(stack,20);
	push(stack,30);
	push(stack,40);
	printf(¨popped from the stack\n¨,pop(stack));
	printf(¨Top item of the stack is %d\n¨,peek(stack));
	
	return 0;
}
```
