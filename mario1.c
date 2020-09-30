#include <stdio.h>

void mario(int n)
{
	int i;
	for( i=1 ; i<=n ; i++)
	{
		//it makes it looks better.
		printf(" ");
		
		int j;
		//half of pyramid: left triangle.
		for(j=0 ; j<n-i ; j++)
		{
			printf(" ");
		}
		int k;
		for(k=n ; k>n-i ; k--)
		{
			printf("#");
		}
		
		printf(" ");
		
		//the other half of pyramid: right triangle.
		for(j=0 ; j<i ; j++)
		{
			printf("#");
		}
		
		printf("\n");
	}
	
}
int main(void)
{
	int num;
	do
	{
		printf("enter a number bigger than 1: ");
		scanf("%d", &num);
	}
	while(num < 1);
	
	mario(num);

}
