#include <stdio.h>

 

int main()

{

 int a[100];

 int i,j,k=0,n;

 scanf("%d",&n);

 printf("No. of Element in Array is: %d\n",n);

 printf("\nGiven Array is : ");

 for(i=0;i<n;i++)

 {

 	scanf("%d",&a[i]); 	printf(" %d ",a[i]);

 }

 for(i=0;i<n;i++)

 {

 	k=0;

 	for(j=0;j<n;j++)

 	{

 		

 		if(a[i]==a[j])

 		{

 		 k++;

 		}

  }

 

 		if(k%2!=0)

 		printf("\nElement %d:-%d occured odd no. of times in Array that is %d times",i,a[i],k);

 

 }

 

}

 
