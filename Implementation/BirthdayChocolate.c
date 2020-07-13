/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int solve(int n, int* s, int d, int m)
{
    int i,j,sum,count=0;
    for(i=0;i<n-m+1;i++)
    {
        for(j=i,sum=0;j<i+m;j++)
        {
            sum+=*(s+j);
        }
        if(sum==d)
        {
            count++;
        }
    }
    return count;
}

int main() {
    int n; 
    scanf("%d", &n);
    int *s = malloc(sizeof(int) * n);
    for(int s_i = 0; s_i < n; s_i++){
       scanf("%d",&s[s_i]);
    }
    int d; 
    int m; 
    scanf("%d %d", &d, &m);
    int result = solve(n, s, d, m);
    printf("%d\n", result);
    return 0;
}
