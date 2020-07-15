/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>
int Loc(int * arr,int n,int a)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(*(arr+i)>a)
        {
            return *(arr+i-1);
        }
    }
    return *(arr+n-1);
}
int LocX(int * arr,int n,int a)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(*(arr+i)>a)
        {
            return i;
        }
    }
    return n+1;
}
void insertionSort(int *p,int n)
{
    int i,j,key;
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

int main()
{
    int n, k, *arr, count=0, i, a, b, x;
    scanf("%d %d",&n,&k);
    arr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    insertionSort(arr,n);
    x=0;
    while(x<n)
    {
        a=k+*(arr+x);
        b=Loc(arr,n,a);
        count++;
        b+=k;
        x=LocX(arr,n,b);
    }
    printf("%d",count);
    return 0;
}
