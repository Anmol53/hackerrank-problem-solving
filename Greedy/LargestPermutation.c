#include <stdio.h>
#include <stdlib.h>

int MaxIndex(int * arr, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(n==*(arr+i))
		{
			return i;
		}
	}
    return i;
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
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
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
	int i,n,m,k,*arr,mi,temp;
	scanf("%d %d",&n,&k);
	arr=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
    if(k>n)
    {
        mergeSort(arr,0,n-1);
    }
    else
    {
        m=n;
        for(i=0;i<k;i++)
        {
            mi=MaxIndex(arr+i,m);
            *(arr+i+mi)=*(arr+i);
            *(arr+i)=m;
            if(mi == 0	&&	mi != (m-1))
            {
                k++;
            }
            if(mi == 0	&& mi+i==n-1)
            {
                break;
            }
            m--;
        }
    }
    for(i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}	
	return 0;
}