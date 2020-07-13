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
	int count=0,n,x,*arr,i,temp=-1;
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	insertionSort(arr,n);
	x=n;
	for(i=0;i<n;i++)
	{
		if(*(arr+i)!=temp)
		{
			temp=*(arr+i);
			x-=count;
			printf("%d\n",x);
			count=1;
		}
		else if(*(arr+i)==temp)
		{
			count++;
		}
	}	
	return 0;
}
