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
    int i, n, *s;
    scanf("%d",&n);
    s=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",s+i);
    }
    insertionSort(s,n);
    for(i=n-1;i>=2;i--)
    {
        if((*(s+i-2)+*(s+i-1))>*(s+i))
        {
            break;
        }
    }
    if(i==1)
    {
        printf("%d",-1);
    }
    else
    {
        printf("%d %d %d",*(s+i-2),*(s+i-1),*(s+i));
    }
    return 0;
}
