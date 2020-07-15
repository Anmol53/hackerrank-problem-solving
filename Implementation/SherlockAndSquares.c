/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <math.h>

int main()
{
    long int t,a,b,X,Y,Z;
    double x,y;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld %ld",&a,&b);
        x=sqrt(a);
        Z=x;
        if(x==Z)
            X=Z;
        else
            X=x+1;
        y=sqrt(b);
        Y=y;
        printf("%ld\n",Y-X+1);
    }
    return 0;
}
