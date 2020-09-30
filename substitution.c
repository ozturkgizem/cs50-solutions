#include <stdio.h>
#include <string.h>

void subs(char* newAbc, char* text)
{
	int i=0,j; 
	while(text[i]!='\0')
	{
		//find the letter's order(j) in abc.
		if(text[i]>='a' && text[i]<='z')
		{
			j=text[i]-97;	
		}
		if(text[i]>='A' && text[i]<='Z')
		{
			j=text[i]-65;
		}
		printf("%c",newAbc[j]);
		i++;
	}	
}

int main()
{
	char abc[26], text[50];
	printf("abc: ");
	scanf("%s",&abc);
	if(strlen(abc)!=26)
	{
		printf("enter again");
		return 1;
	}
	printf("plaintext: ");
	scanf("%s",&text);
	subs(abc,text);
}
