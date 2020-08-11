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
    int n,*a,*b,i,j,count;
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    b=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",b+i);
    }
    insertionSort(a,n);
    insertionSort(b,n);
    count=0;
    for(i=0;i<n;)
    {
        for(j=0;j<n;)
        {
            if(*(a+i)==*(b+j))
            {
                count++;
                i++;
                j++;
            }
            else if(*(a+i)>*(b+j))
            {
                j++;
            }
            else if(*(a+i)<*(b+j))
            {
                i++;
            }
        }
        break;
    }
    if(count<n)
    {
        count++;
    }
    else if(count==n)
    {
        count--;
    }
    printf("%d",count);
    return 0;
}
