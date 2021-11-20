#include <stdio.h>
 
int main()
{
	int a,b,i;

	scanf("%d",&i);
	for(a=0;a<=i;a++)
	{
		for(b=i-1;b>=a;b--)
		{
			printf(" \t ");
			}
		for(b=0;b<=2*a;b++)
		{
		 if(b<=a)
			{
				printf("%d\t ",a+b+1);
				}
				
				else
				{ 
					printf("%d\t ",3*a-b+1);
					}

				}
				printf("\n");
				
				}
}
 
