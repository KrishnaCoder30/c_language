#include <stdio.h>

 

int main()

{

 int i,a[3];

 printf("Elements in Array are:");

 {for(i=0;i<3;i++)

 {

 	scanf("%d",&a[i]);  printf("%d\t\t",a[i]);

 }

 printf("\n");

 }

 printf("\nElements of Array in Reverse Order is:");

{ for(i=2;i>=0;i--)

 {

 	printf("%d\t\t",a[i]);

 	}

 	printf("\n");

 	}

 

}
