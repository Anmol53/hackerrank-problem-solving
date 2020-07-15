/*
*
* @author : Anmol Agrawal
*
*/
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int t,n,ans,i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		ans=1;
		for(j=0;j<n;j++)
		{
			if(j==1||j%2!=0)
			{
				ans+=1;
			}
			else
			{
				ans*=2;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
