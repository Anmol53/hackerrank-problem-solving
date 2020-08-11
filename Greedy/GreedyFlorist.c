#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *p,int n)
{
	int i,j,key;
	for(i=0;i<n;i++)
	{
		key=*(p+i);
		j=i-1;
		while(j>=0&&(*(p+j))>key)
		{
			*(p+j+1)=*(p+j);
			j=j-1;
		}
		*(p+j+1)=key;
	}
}

int GreedyFlorist(int * c,int n,int k)
{
	int i, j=0, count=0,x=1;
	for(i=n-1;i>=0;i--)
	{
		j++;
		count+=(x*(*(c+i)));
		if(j%k==0)
		{
			x++;
		}		
	}
	return count;
}

int main()
{
	int i,n,k,*c,ans;
	scanf("%d %d",&n,&k);
	c=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",c+i);
	}
	insertionSort( c, n);
	ans=GreedyFlorist(c,n,k);
	printf("%d",ans);
	return 0;
}