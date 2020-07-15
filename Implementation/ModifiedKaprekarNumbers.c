/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <math.h>

int main()
{
    long int i,m,check,p,q,sqr,sqr2,temp,a,b;
    int j,count=0,digit;
    scanf("%ld %ld",&p,&q);
    for(i=p;i<=q;i++)
    {
        temp=i;
        for(digit=0;temp>0;digit++)
        {
            temp/=10;
        }
        sqr=pow(i,2);
        sqr2=sqr;
        for(j=0,m=1,a=0;j<digit;j++)
        {
            a+=(sqr%10)*m;
            sqr/=10;
            m*=10;
        }
        b=sqr2/m;
        check=a+b;
        if(i==check)
        {
            count++;
            printf("%ld ",i);
        }
    }
    if(count==0)
    {
        printf("INVALID RANGE");
    }
    return 0;
}
