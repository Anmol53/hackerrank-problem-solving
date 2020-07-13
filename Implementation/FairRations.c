/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, *arr, count=0, i;
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	for(i=0;i<n;i++)
	{
		if(i!=(n-1)&&(*(arr+i)%2!=0))
		{
			count+=2;
			*(arr+i)=*(arr+i)+1;
			*(arr+i+1)=*(arr+i+1)+1;
		}
		else if(i==(n-1)&&(*(arr+i)%2!=0))
		{
			count=-1;
		}
	}
	if(count==-1)
	{
		printf("NO");
	}
	else
	{
		printf("%d",count);
	}
	return 0;
}
