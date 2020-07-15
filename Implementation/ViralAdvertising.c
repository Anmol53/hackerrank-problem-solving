/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>

int main()
{
	int i,n,count,a;
	scanf("%d",&n);
	a=2;
	count=2;
	for(i=2;i<=n;i++)
	{
		a*=3;
		a/=2;
		count+=a;	
	}
	printf("%d",count);
	return 0;
}
