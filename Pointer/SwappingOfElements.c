#include <stdio.h>

 

int main ()

{

	int a[3]={5,6,7};	int *b,i,c[3];

	b=a;

	for(i=0;i<3;i++)

	{

	printf("Element %d : %d\n",i,*b);

	b++;

	}

	printf("\n\n");

	for(i=0;i<=2;i++)

	{

		c[i]=a[2-i];

		

	}

	b=c;

	for(i=0;i<3;i++)

	{

		printf("Element %d : %d\n",i,*b);

		b++;

	}

	

}

 
