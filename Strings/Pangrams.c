/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <string.h>

void insertionSortCharacter(char *p,int n)
{
	int i,j;
	char key;
	for(i=0;i<n;i++)
	{
		key=*(p+i);
		j=i-1;
		while(j>=0&&(*(p+j))>key)
		{
			*(p+j+1)=*(p+j);
			j=j-1;
		}
		*(p+j+1)=key;
	}
}

int main()
{
	int i,j,k,l;
	char s[1001];
	gets(s);
	l=strlen(s);
	insertionSortCharacter(s,l);
	for(i=65,j=97;i<91;i++,j++)
	{
		for(k=0;k<l;k++)
		{
			if(*(s+k)==i||*(s+k)==j)
			{
				break;
			}
		}
		if(k==l)
		{
			break;
		}
	}
	if(i==91)
	{
		printf("pangram");
	}
	else
	{
		printf("not pangram");
	}
	return 0;
}
