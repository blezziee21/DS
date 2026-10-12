#include<stdio.h>
void main()
{
	int n,i,j,a[50],temp;
	printf("Enter the limit of array: ");
	scanf("%d",&n);
	printf("\nEnter the elements of the array: ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nSorted Array= \t");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
