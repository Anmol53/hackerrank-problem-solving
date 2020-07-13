/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int r,x,i,j,len;
    double a;
	char str[100];
	scanf("%s",str);
	len=strlen(str);
	a=sqrt((double)len);
	x=a;
    if(x==a)
        r=x;
    else
        r=x+1;
	if(x*r<len)
	{
		x++;
	}
	for(i=0;i<r;i++)
	{
		for(j=i;j<len;j+=r)
		{
			printf("%c",*(str+j));
		}
		printf(" ");
	}
	return 0;
}
