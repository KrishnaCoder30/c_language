#include <stdio.h>

 

int main()

{

	int a[100];	int i,j,k,n,*b;

	scanf("%d",&n);

	printf("Elements in Array are : %d\n",n);

	for(i=0,b=a;i<n;i++,b++)

	{

	scanf("%d",&*b);

	printf(" %d - %d\n",*b,b);

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

	printf("Descending Order of Array is :");

	for(i=0,b=a;i<n;i++,b++)

	{

		printf(" %d ",*b);

		}

	}

	
