#include<stdio.h>
#include<math.h>

void greedy(int money)
{
	int coins[4]= {25, 10, 5, 1};
	int counter[4]={0,0,0,0};
	int i;
	for(i=0; i<=3; i++)
	{
		while(money-coins[i]>=0)
		{
			counter[i]++;	
			money-=coins[i];
		}		
	}
	int tt=0;
	for(i=0;i<4;i++)
	{
		tt+=counter[i];
	}
	printf("%d",tt);	
}

int main(void)
{
	float dollars;
	int i=0;
	while(i==0)
	{
		printf("change owed: ");
    	scanf("%f", &dollars);
    	if(dollars>0)
    	{
    		i=1;
		}
	}
	int cents= (int)round(dollars * 100);
	greedy(cents);
}
