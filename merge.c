#include<stdio.h>
void main()
{
int a[50],b[50],c[100],m,n,i,j,k;
printf("Enter the size of the first array:\n");
scanf("%d",&m);
printf("Enter the elements of the first array(sorted order):\n");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the size of the second array:\n");
scanf("%d",&n);
printf("Enter the elements of the second array(sorted order):\n");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
i=0;
j=0;
k=0;
while(i<m&&j<n)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
k++;
}
while(i<m)
{
c[k]=a[i];
i++;
k++;
}
while(j<n)
{
c[k]=b[j];
j++;
k++;
}
printf("\nMerged array=");
for(i=0;i<m+n;i++)
{
printf("%d\t",c[i]);
}
}
