#include<stdio.h>

#define SIZE 4
int top = -1, stack[SIZE];

void push()
{
	if(top == SIZE - 1 ) //checking if stack is full or not
	
	printf("Stack is full");
	else
	{
		int n;
		printf("Enter the data: ");
		scanf("%d",&n);
		top++;
		stack[top]=n;
		}	
	
}

void pop()
{
	int popped;
	if(top == -1)
	printf("Stack is empty");
	else
	{
		popped= stack[top];
		top--;
		printf("%d is popped from the stack",popped);
	}
}

void peek()
{
	if(top==-1)
	printf("Stack is empty nothing to peek!");
	else
	{
		printf("top of the stack %d",stack[top]);
	}
}


void displaystck()
{
	for(int i=top; i>=0; i--)
	{
		printf("\n\nprinting all data from stack stack[%d]: %d\n",i,stack[i]);
	}
}


int main()
{
	
	int ch;
	
	do
	{
	printf("\n1. PUSH\n2. POP\n3. PEEK\n4. DISPLAY");
	printf("\nEnter choice: ");
	scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				displaystck();
			default:
				printf("wrong choice");
		}
	}while(ch!=0);
//	for(int i=0;i<=SIZE; i++)
//	{
//		push();
//	}
//displaystck();
//printf("\n");
//pop();
//displaystck();
	return 0;
}
