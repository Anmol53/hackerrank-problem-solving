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
	int n,*arr,i,j,temp,count,mcount=0;
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	insertionSort(arr,n);
	for(i=0;i<n;i++)
	{
		temp=*(arr+i);
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(*(arr+j)==temp)
			{
				count++;
				i++;
			}
			else if(*(arr+j)==temp+1)
			{
				count++;
			}
		}
		if(count>mcount)
		{
			mcount=count;
		}
	}
	printf("%d",mcount);
	return 0;
}
