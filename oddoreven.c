#include<stdio.h>
int main()
{
int a[10],i,n;
printf("Enter the limit: ");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The elements are:\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\nEven numbers are:\n");
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
printf("%d\t",a[i]);
}
}
printf("\nOdd numbers are:\n");
for(i=0;i<n;i++)
{
if(a[i]%2!=0)
{
printf("%d\t",a[i]);
}
}
return 0;
}
