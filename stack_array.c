#include<stdio.h>
#include<stdlib.h>
#define N 10
void push();
void pop();
void display();
int stack[N],top=-1;
void main()
{
    int ch;
    do
    {
    printf("\t Main Menu \n1.Insert \n2.Delete \n3.Display \n4.Exit\n");
    printf("enter your choice:");
    scanf("%d",&ch);
    switch(ch)
      {
        case 1:push();
            break;
        case 2:pop();
            break;
        case 3:display();
            break;
        case 4:exit(0);
            break;
      }
    }while(ch!=0);
}
void push()
{
int x;
printf("enter the element");
scanf("%d",&x);
if(top==N-1)
    printf("stack overflow");
else
    {
    top++;
    stack[top]=x;
    }
}
void pop()
{
int item;
if(top==-1)
    printf("stack underflow");

else
    {
    item=stack[top];
    top--;
    }
}
void display()
{
int i;
printf("stack elements are");
for(i=top;i>=0;i--)
    printf(" %d ",stack[i]);

}
