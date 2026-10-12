#include<stdio.h>
int main()
{
int a[10],i,n,key,found=0;
printf("Enter the limit: \n");
scanf("%d",&n);
printf("Enter the elements to insert: \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter the element to search:\n");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
printf("Element found at position %d\n",i+1);
found=1;
}
}
if(found==0)
{
printf("\nElement not found\n");
}
return 0;
}
