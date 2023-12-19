#include<stdio.h>
#include<stdlib.h>

#define N 5
int queue[N];
int rear=-1;
int front=-1;

void enqueue()
{
    int dat;
    printf("Enter the data: ");
    scanf("%d",&dat);
    if(rear==N-1)
    {
        printf("QUEUE IS FULL");
    }
    else if(rear=front==-1)
    {
        rear=front=0;
        queue[rear]=dat;
        printf("data entered: %d\n",dat);
    }
    else
    {
        rear++;
        queue[rear]=dat;
                printf("new data entered: %d\n",dat);
    }
}
void dequeue()
{
    if(front=rear==-1)
    {
        printf("QUEUE IS EMPTY\n");
    }
    else if(front==rear)
    {
        int temp=queue[front];
        front=rear=-1;
        printf("DATA DELETED: %d\n",temp);
    }
    else
    {
        int temp=queue[front];
        front++;
        printf("NEW DATA DELETED: %d\n",temp);
    }
}


void displayall()
{
    for(int i =0; i<rear+1; i++)
    {
        printf("data at index[%d]: %d",i,queue[i]);
    }
}
void peek()
{
    if(front=rear==-1)
    {
        printf("QUEUE IS EMPTY\n");
    }
    else
    printf("TOP VALUE: %d\n",queue[front]);
}


int main()
{
    int ch;

    do{
        printf("1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY ALL\n4.PEEK\n5.EXIT\nENTER YOUR CHOICE: ");
    scanf("%d",&ch);
        switch(ch)
        {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: displayall(); break;
            case 4: peek(); break;
            case 5: exit(0); break;
            default: printf("Error choice\n"); break;
        }
    }while(ch!=0);
    return 0;
}
