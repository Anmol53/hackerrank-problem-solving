#include <stdio.h>
#include <stdlib.h>

void insertionSort(double *p,int n)
{
	int i,j;
	double key;
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

double MinValue(double * arr, int n)
{
	int i;
	double temp=*(arr);
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
	int n,k,i;
	double *arr,*unfairness,ans;
	scanf("%d %d",&n,&k);
	arr=(double *)malloc(n*sizeof(double));
	for(i=0;i<n;i++)
	{
		scanf("%lf",arr+i);
	}
	insertionSort(arr,n);
	unfairness=(double *)malloc((n-k+1)*sizeof(double));
	for(i=0;i<(n-k+1);i++)
	{
		*(unfairness+i)=*(arr+i+k-1)-*(arr+i);
	}
	ans=MinValue(unfairness,(n-k+1));
	printf("%.0lf",ans);
	return 0;
}