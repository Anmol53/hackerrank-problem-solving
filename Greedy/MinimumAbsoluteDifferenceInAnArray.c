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

int main()
{
    int i,n;
    long int *a,d,min=10000000000;
    scanf("%d",&n);
    a=(long int *)malloc(n*sizeof(long int));
    for(i=0;i<n;i++)
    {
        scanf("%ld",a+i);
    }
    insertionSort(a,n);
    for(i=0;i<n-1;i++)
    {
        d=*(a+i+1)-*(a+i);
        if(d==0)
        {
            min=d;
            break;
        }
        if(d<min)
        {
            min=d;
        }
    }
    printf("%ld",min);
    return 0;
}