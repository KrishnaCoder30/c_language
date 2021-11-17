#include <stdio.h>

 

int main()

{

	int a[100];	int i,j,k,n;

	scanf("%d",&n);

	printf("\nNo. of Elements in Array are :%d\n",n);

	for(i=0;i<n;i++)

	{

		scanf("%d",&a[i]);

		printf("\nElement %d :-%d",i,a[i]);

	}

	for(i=0;i<n;i++)

	{

		for(j=0;j<n;j++)

		{

			if(a[j]<=a[j+1])

			{

				k=a[j+1];

				a[j+1]=a[j];

				a[j]=k;

			}

		}

	}

	printf("\nDescending Order Of Elements is :");

	for(i=1;i<n+1;i++)

	{

		printf(" %d ",a[i]);

		}

		printf("\nSecond Greatest Element in Array is:%d",a[2]);

		printf("\nSecond smallest Element in Array is:%d",a[n-1]);

		}

 
