#include <stdio.h>

 

int main()

{

 int a[100];

 int i,j,k,n;

 scanf("%d",&n);

 printf("No. of Elements: %d\n",n);

 for(i=0;i<n;i++)

 {

 	scanf("%d",&a[i]); 	printf("\nElement %d : %d ",i,a[i]);

 		}

 	scanf("%d",&k);

 	printf("\nPosition Of Element to be Removed : %d\n",k);

 	for(i=k-1;i<n-1;i++)

 	{

 		a[i]=a[i+1];

 		}

 		for(i=0;i<n-1;i++)

 		{

 		printf("%d  ",a[i]);

 		}

 		printf("\nNew Elements in Descending Order are :");

 		for(i=0;i<n-1;i++)

 		{

 			for(j=0;j<n-1;j++)

 			{

 				if(a[j]<=a[j+1])

 				{

 					k=a[j+1];

 					a[j+1]=a[j];

 					a[j]=k;

 					

 					}

 			}

 		}

 		

 		for(i=0;i<n;i++)

 		{

 			

 			printf(" %d ",a[i]);

 			}

 		

 		

 		

 		

 		

 		

}

 
