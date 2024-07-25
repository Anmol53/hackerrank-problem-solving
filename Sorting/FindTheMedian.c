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

int main()
{
    int n,*p,i,a;
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	insertionSort(p,n);
	printf("%d",*(p+(n/2)));
    return 0;
}