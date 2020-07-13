/*
*
* @author : Anmol Agrawal
*
*/
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
    int i,temp,*arr,n,count=0,mcount=0;
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    insertionSort(arr,n);
    temp=*arr;
    for(i=0;i<n;i++)
    {
        if(temp==*(arr+i))
        {
            count++;
        }
        else if (temp!=*(arr+i))
        {
            temp=*(arr+i);
            if(count>mcount)
            {
                mcount=count;
            }
            count=1;
        }
    }
    if(count>mcount)
    {
        mcount=count;
    }
    printf("%d",n-mcount);
    return 0;
}
