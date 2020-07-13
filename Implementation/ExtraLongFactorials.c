/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>

int main()
{
	unsigned long arr[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int i,j,n,k,y;
	scanf("%d",&n);
	arr[0]=1;
	for(i=1;i<=n;i++)
	{
		k=y=0;
		do
		{
			arr[k]*=i;
			arr[k]+=y;
			y=arr[k]/10000000;
			arr[k]%=10000000;
			k++;
		}while(y>0 || arr[k]>0 || arr[k+1]>0 || arr[k+2]>0);
	}
	printf("%lu",arr[k-1]);
	for(j=k-2;j>=0;j--)
	{
		if(arr[j]==0)
			printf("0000000");
		else
		{
			if(arr[j]<1000000)
				printf("0");
			printf("%lu",arr[j]);
		}
	}
	return 0;
}
