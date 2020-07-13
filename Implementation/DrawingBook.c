/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>

int main()
{
    int n,p;
    scanf("%d %d",&n,&p);
    if(p<=(n/2))
        printf("%d",p/2);
    else
        if(n%2==0)
            printf("%d",(n-p+1)/2);
        else
            printf("%d",(n-p)/2);
    return 0;
}
