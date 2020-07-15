/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	long int t,n,m,s,*ans,j,a,b;
	scanf("%ld",&t);
    ans=(long int *)malloc(t*sizeof(long int));
	for(j=0;j<t;j++)
	{
		scanf("%ld %ld %ld",&n,&m,&s);
        a=m%n;
        b=s+a-1;
        if(b==0)
        {
            *(ans+j)=n;
        }
        else if(b<=n)
        {
            *(ans+j)=b;
        }
        else
        {
            *(ans+j)=b-n;
        }
	}
	for(j=0;j<t;j++)
	{
		printf("%ld\n",*(ans+j));
	}
	return 0;
}
