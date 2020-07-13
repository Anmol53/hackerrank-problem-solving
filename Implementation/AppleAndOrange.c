/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,s,t,a,b,n,m,*apple,*orange,ac=0,oc=0,x;
    scanf("%d %d",&s,&t);
    scanf("%d %d",&a,&b);
    scanf("%d %d",&n,&m);
    apple=(int *)malloc(n*sizeof(int));
    orange=(int *)malloc(m*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",apple+i);
        x=a+*(apple+i);
        if( (x>=s) && (x<=t) )
        {
            ac++;
        }
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",orange+i);
        x=b+*(orange+i);
        if( (x>=s) && (x<=t) )
        {
            oc++;
        }
    }
    printf("%d\n%d",ac,oc);
    return 0;
}

