/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int pos=0,n,*arr,count=0,i;
	scanf("%d",&n);
	arr=(int *)malloc((n+1)*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	*(arr+n)=1;
	while(pos<n-1)
	{
		if(*(arr+pos+2)==0)
		{
			pos+=2;
		}
		else
		{
			pos+=1;
		}
		count++;
	}
	printf("%d",count);
	return 0;
}
