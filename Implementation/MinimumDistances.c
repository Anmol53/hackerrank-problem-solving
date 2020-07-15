/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>


int MinValue(int * arr, int n)
{
	int i, temp=*(arr);
	for(i=1;i<n;i++)
	{
		if(temp>*(arr+i))
		{
			temp=*(arr+i);
		}
	}
	return temp;
}

int main()
{
    int i,j,n,*arr,*dis,ans; 
    scanf("%d",&n);
    arr = (int*)malloc(sizeof(int) * n);
    dis = (int*)malloc(sizeof(int) * n);
    for(i = 0; i < n; i++)
    {
       scanf("%d",arr+i);
    }
    for(i = 0; i < n; i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(arr+i)==*(arr+j))
            {
                *(dis+i)=j-i;
                break;
            }
        }
        if(j==n)
        {
            *(dis+i)=1000;
        }
    }
    ans=MinValue(dis,n);
    if(ans<1000)
    {
        printf("%d",ans);
    }
    else
    {
        printf("%d",-1);
    }
    return 0;
}

