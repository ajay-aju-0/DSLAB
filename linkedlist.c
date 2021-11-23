#include <stdio.h>
#include <stdlib.h>

void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();

struct node {
   int data;
   int key;
   struct node *next;
};

struct node *head = NULL;

void create()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("nOut of Memory Space:n");
                exit(0);
        }
        printf("nEnter the data value for the node:t");
        scanf("%d",&temp->data);
        temp->next=NULL;
        if(head==NULL)
        {
                head=temp;
        }
        else
        {
                ptr=head;
                while(ptr->next!=NULL)
                {
                        ptr=ptr->next;
                }
                ptr->next=temp;
        }
}

void display() {
   struct node *ptr = head;
   printf("\n");
	
   //start from the beginning
   while(ptr != NULL) {
      printf("%d ",ptr->data);
      ptr = ptr->next;
   }
	
}

void insert_begin()
{
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("nOut of Memory Space:n");
                return;
        }
        printf("nEnter the data value for the node:t" );
        scanf("%d",&temp->data);
        temp->next =NULL;
        if(head==NULL)
        {
                head=temp;
        }
        else
        {
                temp->next=head;
                head=temp;
        }
}

void insert_end()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("nOut of Memory Space:n");
                return;
        }
        printf("nEnter the data value for the node:t" );
        scanf("%d",&temp->data );
        temp->next =NULL;
        if(head==NULL)
        {
                head=temp;
        }
        else
        {
                ptr=head;
                while(ptr->next !=NULL)
                {
                        ptr=ptr->next ;
                }
                ptr->next =temp;
        }
}

void insert_pos()
{
        struct node *ptr,*temp;
        int i,pos;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("nOut of Memory Space:n");
                return;
        }
        printf("nEnter the position for the new node to be inserted:t");
        scanf("%d",&pos);
        printf("nEnter the data value of the node:t");
        scanf("%d",&temp->data) ;
  
        temp->next=NULL;
        if(pos==0)
        {
                temp->next=head;
                head=temp;
        }
        else
        {
                for(i=0,ptr=head;i<pos-1;i++) { ptr=ptr->next;
                        if(ptr==NULL)
                        {
                                printf("nPosition not found:[Handle with care]n");
                                return;
                        }
                }
                temp->next =ptr->next ;
                ptr->next=temp;
        }
}

void delete_begin()
{
        struct node *ptr;
        if(ptr==NULL)
        {
                printf("nList is Empty:n");
                return;
        }
        else
        {
                ptr=head;
                head=head->next ;
                printf("nThe deleted element is :%dt",ptr->data);
                free(ptr);
        }
}
void delete_end()
{
        struct node *temp,*ptr;
        if(head==NULL)
        {
                printf("nList is Empty:");
                exit(0);
        }
        else if(head->next ==NULL)
        {
                ptr=head;
                head=NULL;
                printf("nThe deleted element is:%dt",ptr->data);
                free(ptr);
        }
        else
        {
                ptr=head;
                while(ptr->next!=NULL)
                {
                        temp=ptr;
                        ptr=ptr->next;
                }
                temp->next=NULL;
                printf("nThe deleted element is:%dt",ptr->data);
                free(ptr);
        }
}
void delete_pos()
{
        int i,pos;
        struct node *temp,*ptr;
        if(head==NULL)
        {
                printf("nThe List is Empty:n");
                exit(0);
        }
        else
        {
                printf("nEnter the position of the node to be deleted:t");
                scanf("%d",&pos);
                if(pos==0)
                {
                        ptr=head;
                        head=head->next ;
                        printf("nThe deleted element is:%dt",ptr->data  );
                        free(ptr);
                }
                else
                {
                        ptr=head;
                        for(i=0;i<pos;i++) { temp=ptr; ptr=ptr->next ;
                                if(ptr==NULL)
                                {
                                        printf("nPosition not Found:n");
                                        return;
                                }
                        }
                        temp->next =ptr->next ;
                        printf("nThe deleted element is:%dt",ptr->data );
                        free(ptr);
                }
        }
}


void main() 
{
int ch;
    do
    {
    printf("\t Main Menu \n1.create \n2.insert at the beginning\n3.insert at the end \n4.insert at specified position\n");
    printf("5.Delete from beginning \n6.Delete from the end \n");
    printf("7.Delete from specified position \n8.display\n9.Exit\n");
    printf("Enter your choice:t");
    scanf("%d",&ch);
    switch(ch)
      {
        case 1:create();
                break;
        case 2:insert_begin();
                break;
        case 3:insert_end();
                break;
        case 4:insert_pos();
                break;
        case 5:delete_begin();
                break;
        case 6:delete_end();
                break;
        case 7:delete_pos();
                break;
        case 8:display();
                break;
        case 9:exit(0);
                break;
        default:printf("n Wrong Choice");
                break;
      }
    }while(ch!=9);
}
