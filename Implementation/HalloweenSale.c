/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>

int main()
{
    int p,d,m,s,count=0;
    scanf("%d %d %d %d",&p,&d,&m,&s);
    while(s>=p)
    {
        count++;
        s-=p;
        if(p-d>m)
            p-=d;
        else
            p=m;
    }
    printf("%d",count);
}
