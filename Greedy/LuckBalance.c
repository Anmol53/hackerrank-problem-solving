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
    int i, j, n, k, l, *t, temp, count=0, a=0;
    scanf("%d %d",&n,&k);
    t=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        *(t+i)=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&temp,&l);
        if(l==0)
        {
            count+=temp;
            a++;
        }
        else if(l==1)
        {
            *(t+i)=temp;
        }
    }
    insertionSort(t,n);
    for(i=n-1,j=0;j<k;i--,j++)
    {
        count+=*(t+i);
    }
    for(;i>=a;i--)
    {
        count-=*(t+i);
    }
    printf("%d",count);
    return 0;
}
