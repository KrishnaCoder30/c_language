#include <stdio.h>

 

int main()

{

	int a[100];	int i,j,k,x,n;

	scanf("%d",&n);

	printf("No. of Elements in Array are : %d\n",n);

	

 for(i=0;i<n;i++)

	{

		scanf("%d",&a[i]);

		printf("\nElement %d : %d",i,a[i]);

		}

		scanf("%d",&x);

		printf("\n\nPut the Number to be inserted:%d",x);

		scanf("%d",&k);

		printf("\nPut the position to which no. to be inserted:%d\n\n",k);

	

 for(i=n;i>=k;i--)

 {

 	a[i]=a[i-1];

 	}

 	a[k-1]=x;

 	for(i=0;i<=n;i++)

 	{

 		printf("  %d  ",a[i]);

 		}		

}

 
