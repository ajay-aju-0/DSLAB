#include<stdio.h>
#include<stdlib.h>
int a[100],n,i;
void insert();
void delete();
void sort();
void search();
void display();
void main()
{ 
int ch;
printf("Enter the no.of elements in array:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
printf("enter the operations to be done in this array:");
do
{
    printf("\n\t Main Menu ");
    printf("1.Insertion\n2.Deletion\n3.Sorting\n4.Searching\n5.exit\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:insert();
            break;
    case 2:delete();
            break;
    case 3:sort();
            break;
    case 4:search();
            break;
    case 5:exit(0);
    default:printf("input error...enter right choice\n");
            break;
    }

} while (ch!=5);
}
void insert()
{
    int no,pos;
    printf("Enter the position:");
    scanf("%d",&pos);
    printf("enter the number to be inserted:");
    scanf("%d",&no);
    n=n+1;
    for(i=n-1;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=no;
    display();
}
void delete()
{   
    int pos;
    printf("\nEnter the location where you wish to delete the element:");
    scanf("%d",&pos);
    if(pos>=n-1)
        printf("\nDeletion not possible");
    else
    {
        for(i=pos-1;i<=n-1;i++)
            a[i]=a[i+1];
        n=n-1;
    }
    printf("\nArray after deletion");
    display();
}
void sort()
{
    int temp;
    for(i=0;i<n;i++)
    {
        for (int j = i+1;j  < n; j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("sorted array is\n");
    display();
}
void search()
{
    int no,c=0;
    printf("enter the element to search:");
    scanf("%d",&no);
    for(i=0;i<n;i++)
    {
        if(a[i]==no)
        {
            c=1;
            break;
        }
    }
    if(c==1)
        printf("%d is found at the position %d",no,i+1);
    else
        printf("element not found");
}
void display()
{
    for (int i = 0; i < n; i++)
        printf("%d\t",a[i]);
}
