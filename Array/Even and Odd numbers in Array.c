#include <stdio.h>

 

int main ()

{

	int a[100],b[100];	int i,j,n,c=0;

	

	printf("No. of Elements in Array:");

	scanf("%d",&n);

	printf("%d\n\nArray 1 is :",n);

	for(int i=0;i<n;i++)

	{

		scanf("%d",&a[i]);

		printf("%d\t\t",a[i]);

		}

		printf("\nEven Numbers in Array are:");

		for(i=0;i<n;i++)

		{

			if(a[i]%2==0)

			{

				printf("\t\t%d",a[i]);

				}

				}

				printf("\nOdd Numbers in Array:");

				for(i=0;i<n;i++)

				{

					if(a[i]%2!=0)

				{

					printf("\t\t%d",a[i]);

					}

					}

		

}

 
