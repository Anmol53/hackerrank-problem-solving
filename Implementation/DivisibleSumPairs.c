/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int divisibleSumPairs(int n, int k, int* ar)
{
    int i,j,x,count=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            x=*(ar+i)+*(ar+j);
            if((x>=k)&&(x%k==0))
            {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n; 
    int k; 
    scanf("%i %i", &n, &k);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = divisibleSumPairs(n, k, ar);
    printf("%d\n", result);
    return 0;
}
