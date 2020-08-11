#include <stdio.h>
#include <stdlib.h>

void merge(long int arr[],long int l,long int m,long int r)
{
    long int i, j, k;
    long int n1 = m - l + 1;
    long int n2 =  r - m;
    long int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] >= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(long int arr[],long int l,long int r)
{
    if (l < r)
    {
        long int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
	long int q,n,m,z,i,j,countx,county,*arr,*brr,cost;
	scanf("%ld",&q);
	for(z=0;z<q;z++)
	{
		scanf("%ld %ld",&n,&m);
		countx=1;
		county=1;
		arr=(long int*)malloc(n*sizeof(long int));
		brr=(long int*)malloc(m*sizeof(long int));
		for(i=0;i<n-1;i++)
		{
			scanf("%ld",arr+i);
		}
		for(j=0;j<m-1;j++)
		{
			scanf("%ld",brr+j);
		}
        *(arr+n-1)=-1;
        *(brr+m-1)=-1;
        mergeSort(arr,0,n-2);
        mergeSort(brr,0,m-2);
		cost=0;
		for(i=0,j=0;i!=n-1||j!=m-1;)
		{
			if(*(arr+i)>=*(brr+j))
			{
				cost+=(*(arr+i)*county);
				countx++;
				i++;
			}
			else
			{
				cost+=(*(brr+j)*countx);
				county++;
				j++;
			}
		}
		printf("%ld\n",cost%(1000000007));
	}
	return 0;
}