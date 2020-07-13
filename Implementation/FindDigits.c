/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t,i,*ans,count;
	long int x,y,a;
	scanf("%d",&t);
	ans=(int *)malloc(t*sizeof(int));
	for(i=0;i<t;i++)
	{
		count=0;
		scanf("%ld",&x);
		y=x;
		while(y>0)
		{
			a=y%10;
			if(a==0){}
			else if(x%a==0)
			{
				count++;
			}
			y/=10;
		}
		*(ans+i)=count;
	}
	for(i=0;i<t;i++)
	{
		printf("%d\n",*(ans+i));
	}
	return 0;
}
