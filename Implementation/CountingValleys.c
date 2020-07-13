/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,n,level=0,s=1,t=0,count=0;
	char *str;
	scanf("%d",&n);
	str=(char *)malloc(n*sizeof(char));
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		scanf("%c",str+i);
	}
	for(i=0;i<=n;i++)
	{
        if(i==n)
        {
            level=0;
        }
		if(*(str+i)=='U')
		{
			level++;
		}
		else if(*(str+i)=='D')
		{
			level--;
		}
		if(level==-1 && s==1)
		{
			s=0;
            t=1;
		}
        if(level==0 && t==1)
        {
            t=0;
            s=1;
            count++;
        }
	}
	printf("%d",count);
	return 0;
}
