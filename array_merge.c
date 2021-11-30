#include<stdio.h>
int main()
{
int a[50],b[50],c[50],k,i,m,n,temp;
printf("enter the number of elements in array 1:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    c[i]=a[i];
}
k=i;
printf("enter the number of elements in array 2:");
scanf("%d",&m);
printf("enter the elements:");
for(i=0;i<m;i++)
{
    scanf("%d",&b[i]);
    c[k]=b[i];
    k++;
}
printf("array after merging:");
for(i=0;i<k;i++)
{
    for (int j = i+1;j  < k; j++)
    {
        if (c[i]>c[j])
        {
            temp=c[i];
            c[i]=c[j];
            c[j]=temp;
        }
    }
}
for(i=0;i<k;i++)
    printf(" %d ",c[i]);
return 0;
}
