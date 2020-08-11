#include <stdio.h>
#include <string.h>
#include <math.h>
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

int PriyankaAndToys(int *w,int n)
{
    int i,j,count=0,x;
    for(i=0;i<n;i++)
    {
        x=*(w+i);
        count++;
        for(j=i+1;*(w+j)<=(x+4);j++)
        {
            i++;
        }
    }
    return count;
}

int main()
{
	int n, i, *w, result;
	scanf("%d",&n);
	w=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",w+i);
	}
    insertionSort(w,n);
    result=PriyankaAndToys(w,n);
    printf("%d",result);
    return 0;
}
