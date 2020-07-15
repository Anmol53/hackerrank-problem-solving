/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	double n,x,count=0;
    int i,l,y;
	char *arr;
	arr=(char *)malloc(100*sizeof(char));
	scanf("%s",arr);
	l=strlen(arr);
	scanf("%lf",&n);
    x=n/l;
    x=trunc(x);
    y=n-(l*x);
	for(i=0;i<l;i++)
	{
		if(*(arr+i)=='a')
		{
			count++;
		}
	}
    count*=x;
	for(i=0;i<y;i++)
	{
		if(*(arr+i)=='a')
		{
			count++;
		}
	}
	printf("%.0lf",count);
	return 0;
}
