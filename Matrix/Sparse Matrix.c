#include <stdio.h>

 

int main()

{

 int a[100][100];

 int i,j,k=0,n,m;

 scanf("%d %d",&n ,&m);

 printf("No. of Rows:%d\n",n);

 printf("No. of Columns:%d\n",m);

 for(i=0;i<n;i++)

 {

 	for(j=0;j<m;j++) 	{

 		scanf("%d",&a[i][j]);

 		printf(" %d ",a[i][j]);

 	}

 	printf("\n");

 }

 for(i=0;i<n;i++)

 {

 	for(j=0;j<m;j++)

 	{

 	if(a[i][j]==0)

 	{

 		k++;

 		}

 		}

 		}

 if(k>=m*n/2)

 {

 	printf("Matrix is Sparse Matrix becoz No. of Zeroes in matrix is %d",k);

 	}

 	else

 	{

 		printf("Not a Sparse Matrix");

 		}

}

 
