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

int PermutingTwoArrays(long int * A,long int * B,int n,long int k)
{
	int i,j;
	for(i=0,j=n-1;i<n;i++,j--)
	{
		if((*(A+i)+*(B+j))<k)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i,j,q,n,*ans;
	long int k,*A,*B;
	scanf("%d",&q);
	ans=(int *)malloc(q*sizeof(int));
	for(i=0;i<q;i++)
	{
		scanf("%d %ld",&n,&k);
		A=(long int *)malloc(n*sizeof(long int));
		B=(long int *)malloc(n*sizeof(long int));
		for(j=0;j<n;j++)
		{
			scanf("%ld",A+j);
		}
		for(j=0;j<n;j++)
		{
			scanf("%ld",B+j);
		}
		insertionSort( A, n);
		insertionSort( B, n);
		*(ans+i)=PermutingTwoArrays(A,B,n,k);
	}
	for(i=0;i<q;i++)
	{
		if(*(ans+i)==0)
		{
			printf("NO\n");
		}
		else if(*(ans+i)==1)
		{
			printf("YES\n");
		}
	}
}