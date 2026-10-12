#include<stdio.h>
int main()
{
int a[5],i,n,sum=0;
printf("Enter the limit: ");
scanf("%d",&n);
printf("Enter the elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The elements are:\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
return 0;
}
