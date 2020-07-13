/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t, z, n, c, m, i, x, choco;
	scanf("%d",&t);
	for(z=0;z<t;z++)
	{
		scanf("%d %d %d",&n,&c,&m);
		n/=c;
		choco=n;
		while(n>=m)
		{
			x=n/m;
			choco+=x;
			n+=(x-(m*x));
		}
		printf("%d\n",choco);
	}
	return 0;
}
