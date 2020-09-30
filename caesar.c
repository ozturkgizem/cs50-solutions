#include <stdio.h>
#include <string.h>

void caesar(int k, char* text)
{
	int i=0;
	while(text[i]!='\0')
	{

		if(text[i]>='a' && text[i]<='z')
		{
		printf("%c", (((text[i] + k) - 97) % 26) + 97);
		}
		else if(text[i]>='A' && text[i]<='Z')
		{
			printf("%c", (((text[i] + k) - 65) % 26) + 65);
		}
		else
		{
			printf("%c",text[i]);
		}
		i++;	
	}
	
}

int main()
{
	char i, text[100];
	printf("key: ");
	scanf("%c",&i);
	if(isdigit(i)==0 && i<=0)
	{
		printf("enter a key");
		return 1;
	}
	int key= (int)i;
	printf("plaintext: ");
	scanf("%s",&text);
	caesar(key,text);
}
