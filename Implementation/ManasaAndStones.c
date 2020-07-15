/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

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
    int t,*n,**ans,i,j,k,*last,a,b,*x;
    scanf("%d",&t);
    n=(int *)malloc(t*sizeof(int));
    ans=(int * *)malloc(t*sizeof(int *));
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",n+i,&a,&b);
        if(a==b)
        {
            last=(int*)malloc(sizeof(int));
            *last=((*(n+i)-1)*a);
            *(n+i)=1;
        }
        else
        {
            last=(int*)malloc(*(n+i)*sizeof(int));
            for(j=0,k=*(n+i)-1;k>=0;j++,k--)
            {
                *(last+j)=(a*k)+(b*j);
            }
        }
        insertionSort(last,*(n+i));
        *(ans+i)=last;
    }
    for(i=0;i<t;i++)
    {
        x=*(ans+i);
        for(j=0;j<*(n+i);j++)
        {
            printf("%d ",*(x+j));
        }
        printf("\n");
    }
    return 0;
}
