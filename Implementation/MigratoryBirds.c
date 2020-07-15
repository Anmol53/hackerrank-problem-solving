/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>
int migratoryBirds(int n, int* ar) {
    int a[5]={0,0,0,0,0},i,count,ans;
    for(i=0;i<n;i++)
    {
        if(*(ar+i)==1)
        {
            a[0]++;
        }
        else if(*(ar+i)==2)
        {
            a[1]++;
        }
        else if(*(ar+i)==3)
        {
            a[2]++;
        }
        else if(*(ar+i)==4)
        {
            a[3]++;
        }
        else if(*(ar+i)==5)
        {
            a[4]++;
        }
    }
    count=a[4];
    ans=5;
    for(i=3;i>=0;i--)
    {
        if(count<=a[i])
        {
            count=a[i];
            ans=i+1;
        }
    }
    return ans;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = migratoryBirds(n, ar);
    printf("%d\n", result);
    return 0;
}
