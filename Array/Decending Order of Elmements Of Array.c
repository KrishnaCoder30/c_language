#include <stdio.h>

 

int main()

{


 int s1;

 int i,j,k,n;

 scanf("%d",&n);
 
 int a[n],b[n];

 printf("No. of Elements in Array:%d",n);

 

 for(i=0;i<n;i++)

 {

 	scanf("%d",&a[i]); 	printf("\nElement in Array 1 :-%d:%d",i,a[i]);

 	}

 	printf("\n\nElements in Array in Descending order are:");

 		printf("\n\n");

 		for(j=0;j<n;j++)

 		{

 		for(i=0;i<n-1;i++)

  {

 				if(a[i]<=a[i+1])

 				{

 					k=a[i+1];

 					a[i+1]=a[i];

 					a[i]=k;

 					}

 					}

 					}

 					for(j=0;j<n;j++)

 					{

 						printf("%d\t   ",a[j]);

 						}

 				}

 
