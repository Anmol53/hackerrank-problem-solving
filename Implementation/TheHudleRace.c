/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,n,k,*h,temp,ans;
	scanf("%d %d",&n,&k);
	h=(int *)malloc(n*sizeof(int));
	temp=k;
	for(i=0;i<n;i++)
	{
		scanf("%d",h+i);
		if(*(h+i)>temp)
		{
			temp=*(h+i);
		}
	}
	ans=temp-k;
	printf("%d",ans);
	return 0;
}
