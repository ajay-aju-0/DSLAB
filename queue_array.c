#include<stdio.h>
#include<stdlib.h>
#define N 10
void create();
void enqueue();
void dequeue();
void display();
int q[N],rear=-1,front=-1,n,i;
int main()
{
int ch;
    do
    {
    printf("Enter your choice \n1.Insert \n2.Delete \n3.Display \n4.Exit");
    scanf("%d",&ch);
    switch(ch)
      {
        case 1:enqueue();
               break;
        case 2:dequeue();
               break;
        case 3:display();
               break;
        case 4:exit(0);
               break;
      }
    }while(ch!=4);
}
void enqueue()
{
int x;
printf("Enter the element to be inserted:");
scanf("%d",&x);
if(rear==N-1)
    printf("Queue is full");
else if(front==-1&&rear==-1)
  { 
    front=rear=0;
    q[rear]=x;
  }
else
  {
    rear++;
    q[rear]=x;
  }
}
void dequeue()
{
if(front==-1&&rear==-1)
    printf("Underflow");
else if(front==rear)
  {
    front=rear=-1;
  }
else
  {
    front++;
  }
}
void display()
{
if(front==-1&&rear==-1)
    printf("Queue is empty");
else
  {
    printf("The queue elements are:");
    for(i=front;i<rear+1;i++)
        printf("%d",q[i]);
  }
}
