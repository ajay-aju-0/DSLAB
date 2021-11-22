#include <stdio.h>
#include<stdlib.h>
#define N 5

int cqueue[N];
int front = -1, rear = -1;

void enQueue();
void deQueue();
void display();

void enQueue() {
    int x;
    printf("Enter the element to be inserted:");
    scanf("%d",&x);
    if ((front == rear + 1) || (front == 0 && rear == N - 1))
        printf("\n Queue is full!! \n");
    else if (front == -1 && rear == -1) 
     {
      front = rear = 0;
      cqueue[rear] = x;
      printf("\n Inserted -> %d", x);
     }
    else
    {
      rear = rear+1;
      cqueue[rear] = x;
      printf("\n Inserted -> %d", x);
    }
}

void deQueue() {
  int element;
  if (front == -1) 
  {
    printf("\n Queue is empty !! \n");
  } 
  else 
  {
    element = cqueue[front];
    if (front == rear) 
       front = rear = -1;
    else 
       front = (front + 1) % N;
    printf("\n Deleted element -> %d \n", element);
  }
}

void display() {
  int i;
  if (front == -1)
    printf(" \n Empty Queue\n");
  else 
   {
    printf("\n Front -> %d ", front);
    printf("\n Items -> ");
    for (i = front; i != rear; i = (i + 1) % N) {
      printf("%d ", cqueue[i]);
   }
    printf("%d ", cqueue[i]);
    printf("\n Rear -> %d \n", rear);
  }
}

void main() 
{
    int ch;
    do
    {
    printf("Enter your choice \n1.Insert \n2.Delete \n3.Display \n4.Exit");
    scanf("%d",&ch);
    switch(ch)
      {
        case 1:enQueue();
               break;
        case 2:deQueue();
               break;
        case 3:display();
               break;
        case 4:exit(0);
               break;
      }
    }while(ch!=4);
}
