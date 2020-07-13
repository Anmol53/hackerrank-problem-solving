/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m, n, i, j, k, max=0, count, temp;
	char **arr, *brr;
	scanf("%d %d",&n,&m);
    arr=(char **)malloc(n*sizeof(char*));
    brr=(char *)malloc(m*sizeof(char));
	for(i=0;i<n;i++)
	{
	    arr[i]=(char *)malloc(m*sizeof(char));
		scanf(" %s",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			for(k=0;k<m;k++)
			{
				*(brr+k)=*(arr[i]+k)|*(arr[j]+k);
			}
			temp=0;
			for(k=0;k<m;k++)
			{
				if(*(brr+k)=='1')
				{
					temp++;
				}
			}
			if(temp>max)
			{
				count=1;
				max=temp;
			}
			else if(temp==max)
			{
				count++;
			}
		}
	}
	printf("%d\n%d",max,count);
	return 0;
}
