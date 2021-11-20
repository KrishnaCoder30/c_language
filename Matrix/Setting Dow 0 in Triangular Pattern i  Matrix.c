#include <stdio.h>

 

int main()

{

 int a[100][100];

 int i,j,k,n;

 scanf("%d",&n);

 for(i=0;i<n;i++)

 {

 	for(j=0;j<n;j++) 	{

 		scanf("%d",&a[i][j]);

 		printf(" %d ",a[i][j]);

 		}

 		printf("\n");

 		}

 printf("\n");

 if(n%2==0)

 for(i=0;i<n/2;i++)

 {

 	a[n/2+i][0]=0;

 	a[n-1][n/2-1-i]=0;

 	}

 else

 {

 for(i=0;i<=n/2;i++)

 {

 	a[n/2+i][0]=0;

 	a[n-1][n/2-i]=0;

 	}

 }

 for(i=0;i<n;i++)

 {

 	for(j=0;j<n;j++)

 {

 printf(" %d ",a[i][j]);

 }

 printf("\n");

 }

 

 

 

  		

}

 
