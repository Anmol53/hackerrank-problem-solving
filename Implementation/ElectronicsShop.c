/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,x,m,n;
    long int s,*key,*usb,ans=-1;
	scanf("%ld %d %d",&s,&n,&m);
	key=(long int *)malloc(n*sizeof(long int));
	usb=(long int *)malloc(m*sizeof(long int));
	for(i=0;i<n;i++)
	{
		scanf("%ld",key+i);
	}
	for(i=0;i<m;i++)
	{
		scanf("%ld",usb+i);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			x=(*(key+i))+(*(usb+j));
			if(s==x)
			{
				printf("%ld",s);
				return 0;
			}
			if((s-x)>0)
			{
				if(x>ans)
				{
					ans=x;
				}
			}
		}
	}
	printf("%ld",ans);
	return 0;
}
