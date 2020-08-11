#include <stdio.h>
#include <stdlib.h>

void insertionSort(long int *p,int n)
{
	int i,j;
	long int key;
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

int MarkAndToys(long int * p,int n,int k)
{
	int i, count=-1, add=0;
	for(i=0;(i<n)&&(add<=k);i++)
	{
		add+=*(p+i);
		count++;
	}
	return count;
}

int main()
{
	int i, n, ans;
	long int k, *p;
	scanf("%d %ld",&n,&k);
	p=(long int *)malloc(n*sizeof(long int));
	for(i=0;i<n;i++)
	{
		scanf("%ld",p+i);
	}
	insertionSort(p,n);
	ans=MarkAndToys(p,n,k);
	printf("%d",ans);
	return 0;
}