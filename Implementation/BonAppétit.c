/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

void bonAppetit(int n, int k, int b,int* arr)
{
    int i, sum=0,ans;
    for(i=0;i<n;i++)
    {
        if(i!=k)
        {
            sum+=*(arr+i);
        }
    }
    ans=b-(sum/2);
    if(ans==0)
    {
        printf("Bon Appetit");
    }
    else
    {
        printf("%d",ans);
    }
}

int main() {
    int n; 
    int k; 
    scanf("%i %i", &n, &k);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int b; 
    scanf("%i", &b);
    bonAppetit(n, k, b, ar);
    return 0;
}
