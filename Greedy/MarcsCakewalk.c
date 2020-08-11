#include <stdio.h>
#include <stdlib.h>

long int pow(int a,int b)
{
	int i;
    long int ans=1;
	for(i=0;i<b;i++)
	{
		ans*=a;
	}
	return ans;
}

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

long int Marcs_Cakewalk(int* c , int n )
{
	int i, j;
    long int ans=0;
	for(i=n-1,j=0;i>=0;j++,i--)
	{
		ans+=(*(c+i)*pow(2,j));
	}
	return ans;
}

int main()
{
	int i, n, *c;
    long ans;
	scanf("%d",&n);
	c=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",c+i);
	}
	insertionSort( c , n );
	ans=Marcs_Cakewalk( c , n );
	printf("%ld",ans);
	return 0;
}
