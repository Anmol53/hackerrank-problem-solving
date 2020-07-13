/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	long int i,j,k,r,temp,tempr,n,m,a,ans=0;
	int *arr;
	scanf("%ld  %ld",&n,&m);
	j=0-n;
	arr=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		*(arr+i)=0;
	}
	for(i=0;i<m;i++)
	{
		scanf("%ld",&a);
		*(arr+a)=1;
	}
	for(i=0;i<n;i++)
	{
		if(*(arr+i)==1)
		{
			j=i;
			temp=0;
		}
		else if(*(arr+i)==0)
		{
			temp=i-j;
			for(k=i+1;k<n;k++)
			{
				if(*(arr+k)==1)
				{
					r=k;
					break;
				}
			}
			if(k!=n)
			{
				tempr=r-i;
				if(tempr<temp)
				{
					temp=tempr;
				}
			}
		}
		if(ans<temp)
		{
			ans=temp;
		}
	}
	printf("%ld",ans);
	return 0;
}
