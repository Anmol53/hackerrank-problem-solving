/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i,j,n,k,count,temp; 
    scanf("%i", &t);
    for(i=0;i<t;i++)
    {
        count=0;
        scanf("%i %i", &n, &k);
        for (j=0;j<n;j++) 
        {
           scanf("%i",&temp);
           if(temp<=0)
               count++;
        }
        if(count<k)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
