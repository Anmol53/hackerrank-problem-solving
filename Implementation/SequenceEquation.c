/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int Search(int * arr,int n,int a)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(*(arr+i)==a)
		{
			return i;
		}
	}
	printf("Element Not Found !!!");
	return -1;
}

int main()
{
	int n,*arr,i,x,y;
	scanf("%d",&n);
	arr=(int *)malloc((n+1)*sizeof(int));
	for(i=1;i<=n;i++)
	{
		scanf("%d",arr+i);
	}
	*arr=0;
	for(i=1;i<=n;i++)
	{
		x=Search(arr,n+1,i);
		y=Search(arr,n+1,x);
		printf("%d\n",y);
	}
	return 0;
}
