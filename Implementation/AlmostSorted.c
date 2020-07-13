/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

void swap(int *arr,int l,int r)
{
    int temp;
    temp=arr[l];
    arr[l]=arr[r];
    arr[r]=temp;    
}

void reverse(int * arr,int l,int r)
{
    int temp,i,d=(r-l+1)/2;
    for(i=1;i<=d;i++)
    {
        swap(arr,l,r);
        l++;
        r--;
    }
}
void almostSorted(int n, int* arr)
{
    int i,j,x=-1,l=-1,r,m,o,temp;
    for(i=1;i<=n;i++)
    {
        if(*(arr+i)<x)
        {
            if(n==2)
            {
                temp=arr[1];
                arr[1]=arr[2];
                arr[2]=temp;
                l=1;
                r=2;
            }
            else
            {
                l=i-1;
                for(j=l+1;j<=n;j++)
                {
                    if(arr[l]<arr[j])
                    {
                        r=j-1;
                        swap(arr,l,r);
                        break;
                    }
                }
                if(j==n+1)
                {
                    r=n;
                    swap(arr,l,r);
                }
                break;
            }
        }
        else
            x=*(arr+i);
    }
    x=-1,m=-1;
    if(l==-1)
        printf("yes");
    else
    {
        for(i=1;i<=n;i++)
        {
            if(*(arr+i)<x)
            {
                m=i;
                swap(arr,l,r);
                reverse(arr,l,r);
                break;
            }
            else
                x=*(arr+i);
        }
        x=-1,o=-1;
        if(m==-1)
            printf("yes\nswap %d %d",l,r);
        else
        {
            for(i=1;i<=n;i++)
            {
                if(*(arr+i)<x)
                {
                    o=i;
                    break;
                }
                else
                    x=*(arr+i);
            }
            if(o==-1)
                printf("yes\nreverse %d %d",l,r);
            else
                printf("no");
        }
    }
}

int main() {
    int n; 
    scanf("%i", &n);
    int *arr = malloc(sizeof(int) * (n+1));
    for (int i = 1; i <= n; i++) {
       scanf("%i",&arr[i]);
    }
    almostSorted(n, arr);
    return 0;
}
