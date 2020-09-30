#include<stdio.h>
#include <string.h>
#include <stdbool.h>


// it determines the credit card number is legit or not: according to Luhn's Algorithm.
bool legit(char* ccn)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;
	for(i=0; i<=strlen(ccn); i+=2)
	{
		sum1+= (int)ccn[i]*2;
	}
	int j;
	for(j=1; j<=strlen(ccn); j+=2)
	{
		sum2+= (int)ccn[i];
	}
	int sum3 = sum1 + sum2;
	int result = sum3%10;
	if(result==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

/*visa (13-16 digits; start with 4)
mastercard (16 digits; sw 51,52,53,54 or 55)
american express (15 digits; sw 34 or 37) */
void whichbank(char* ccn)
{
	switch(strlen(ccn))
	{
		case 13:
			if(ccn[0]=='4')
			{
				printf("VISA");
			}
			else 
			{
				printf("OTHER");
			}
			break;
		
		case 15:
			if(ccn[0]=='3' && ccn[1]=='4' || ccn[1]=='7')
			{
				printf("AMERICAN EXPRESS");
			}
			else 
			{
				printf("OTHER");
			}
			break;
			
		case 16:
			if(ccn[0]=='4')
			{
				printf("VISA");
			}
			else if(ccn[0]=='5' && ccn[1]=='1' || ccn[2]=='2' || ccn[1]=='3' || ccn[1]=='4' || ccn[0]=='5')
			{
				printf("MASTERCARD");
			}
			else 
			{
				printf("OTHER");
			}
			break;
		default:
			printf("INVALID");	
	}
}



int main(void)
{
	char ccn[16];
	printf("ccn: ");
    scanf("%s",&ccn);
	
	bool tf = legit(ccn);
	
	if(tf== true)
	{
		whichbank(ccn);
	}
	else
	{
		printf("INVALID");
	}
}
