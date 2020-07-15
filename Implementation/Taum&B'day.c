/*
*
* @author : Anmol Agrawal
*
*/
#include <stdlib.h>
#include <stdio.h>

int main()
{
    long double B,W,X,Y,Z,t,*ans;
    int i;
    scanf("%Lf",&t);
    ans=(long double *)malloc(t*sizeof(long double));
    for(i=0;i<t;i++)
    {
        scanf("%Lf %Lf",&B,&W);
        scanf("%Lf %Lf %Lf",&X,&Y,&Z);
        if(Y+Z<X)
        {
            X=Y+Z;
        }
        if(X+Z<Y)
        {
            Y=X+Z;
        }
        *(ans+i)=(B*X+W*Y);
    }
    for(i=0;i<t;i++)
    {
        printf("%.0Lf\n",*(ans+i));
    }
    return 0;
}
