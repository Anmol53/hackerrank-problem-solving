/*
*
* @author : Anmol Agrawal
*
*/
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int t,*arr,ans;
	long int n,i,j,k,l;
	scanf("%ld %d",&n,&t);
	arr=(int *)malloc(n*sizeof(int));
	for(k=0;k<n;k++)
	{
		scanf("%d",arr+k);
	}
	for(k=0;k<t;k++)
	{
		scanf("%ld %ld",&i,&j);
		ans=3;
		for(l=i;l<=j;l++)
		{
			if(*(arr+l)<ans)
			{
				ans=*(arr+l);
			}
			if(ans==1)
			{
				break;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
