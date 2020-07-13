/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i,n;
    long int *arr,hr=-1,lr=100000001,lc=-1,hc=-1;
    scanf("%d",&n);
    arr= (long int *)malloc(sizeof(long int) * n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",arr+i);
        if(*(arr+i)>hr)
        {
           hr=*(arr+i);
           hc++;
        }
        if(*(arr+i)<lr)
        {
           lr=*(arr+i);
           lc++;
        }
    }
    printf("%ld %ld",hc,lc);
    return 0;
}
