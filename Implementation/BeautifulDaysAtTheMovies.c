/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int AbsoluteDiff(int a, int b)
{
	if(a>=b)
	{
		return a-b;
	}
	return b-a;
}

int ReverseNum(int a)
{
	int b=0,r;
	while(a>0)
	{
		r=a%10;
		b=(b*10)+r;
		a/=10;
	}
	return b;
}

int main()
{
	int i,j,k,a,count=0,ra,ad;
	scanf("%d %d %d",&i,&j,&k);
	for(a=i;a<=j;a++)
	{
		ra=ReverseNum(a);
		ad=AbsoluteDiff(a,ra);
		if(ad%k==0)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
