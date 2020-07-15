/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	long int t, i, j, x;
	scanf("%ld",&t);
    i=1;
    for(j=0;;j++)
    {
        if(t<i)
        {
        	i-=x;
            break;
        }
        x=(3*pow(2,j));
        i+=x;
    }
    while(i<t)
    {
    	i++;
    	x--;
	}
	printf("%ld",x);
	return 0;
}
