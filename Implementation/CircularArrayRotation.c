/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	long int *arr, n, k, q, i, j, a;
	scanf("%ld %ld %ld",&n,&k,&q);
    k=k%n;
	arr=(long int *)malloc(n*sizeof(long int));
	for(i=0;i<n;i++)
	{
		j=i+k;
		if(j>=n)
		{
			j-=n;
		}
		scanf("%ld",arr+j);
	}
	for(i=0;i<q;i++)
	{
		scanf("%ld",&a);
		printf("%ld\n",*(arr+a));
	}
	return 0;
}
