#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, k, *arr, count=0, i, a, x;
	scanf("%d %d",&n,&k);
	arr=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	a=0;
	x=-1;
	while(1)
	{
		for(i=k+a-1;i>x;i--)
		{
			if(i<n && *(arr+i)==1)
			{
				x=i;
				i++;
				a=k+x;
				count++;
				break;
			}
		}
		if(i==x)
		{
			printf("-1");
			break;
		}
		if(x+k>=n)
		{
			printf("%d",count);
			break;
		}
	}
	return 0;
}
