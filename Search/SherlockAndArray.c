#include <stdio.h>
#include <stdlib.h>

int ArraySum(int *arr,int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
		sum+=*(arr+i);
	return sum;
}

int main()
{
	int t,n,*arr,*ans,i,j,z,l,r;
	scanf("%d",&t);
	ans=(int *)malloc(t*sizeof(int));
	for(z=0;z<t;z++)
	{
		scanf("%d",&n);
		arr=(int *)malloc(n*sizeof(int));
		for(i=0;i<n;i++)
		{
			scanf("%d",arr+i);
		}
        l=0;
        r=ArraySum(arr+1,n-1);
        if(l==r)
        {
            *(ans+z)=1;
            continue;
        }
        for(j=1;j<n-1;j++)
        {
            l+=*(arr+j-1);
            r-=*(arr+j);
            if(l==r)
            {
                *(ans+z)=1;
                break;
            }
        }
        if(j==n-1)
        {
            *(ans+z)=0;
        }
	}
	for(z=0;z<t;z++)
	{
		if(*(ans+z)==0)
			printf("NO\n");
		else if(*(ans+z)==1)
			printf("YES\n");
	}
	return 0;
}
