#include <stdio.h>
#include <stdlib.h>

typedef struct time
{
	int t,index;
}time;

void Sort(time *p,int n)
{
	int i,j,k,key,key1;
	while(--n)
	{
		for(j=0;j<n;j++)
		{
			if((p+j)->t>(p+j+1)->t)
			{
				key=(p+j)->t;
				key1=(p+j)->index;
				(p+j)->t=(p+j+1)->t;
				(p+j)->index=(p+j+1)->index;
				(p+j+1)->t=key;
				(p+j+1)->index=key1;
			}
		}
	}
}

int main()
{
	int i,n,a,b;
	time *ti;
	scanf("%d",&n);
	ti=(time *)malloc(n*sizeof(time));
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		(ti+i)->t=a+b;
		(ti+i)->index=i;
	}
	Sort(ti,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",((ti+i)->index)+1);
	}
	return 0;
}