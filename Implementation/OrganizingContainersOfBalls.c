/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

void insertionSort(long int *p,long int n)
{
	long int i,j,key;
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
    long int q,n,*arr,*c,*r,i,j,sum;
    scanf("%ld",&q);
    while(q--)
    {
        scanf("%ld",&n);
        arr=(long int *)malloc(n*n*sizeof(long int));
        c=(long int *)malloc(n*sizeof(long int));
        r=(long int *)malloc(n*sizeof(long int));
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                scanf("%ld",arr+(i*n)+j);
        }
        for(i=0;i<n;i++)
        {
            sum=0;
            for(j=0;j<n;j++)
                sum+=*(arr+(i*n)+j);
            *(r+i)=sum;
        }
        for(j=0;j<n;j++)
        {
            sum=0;
            for(i=0;i<n;i++)
                sum+=*(arr+(i*n)+j);
            *(c+j)=sum;
        }
        insertionSort(c,n);       
        insertionSort(r,n);
        for(i=0;i<n;i++)
        {
            if(*(c+i)!=*(r+i))
            {
                printf("Impossible\n");
                break;
            }
        }
        if(i==n)
            printf("Possible\n");
    }
    return 0;
}
