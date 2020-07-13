/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int AbsoluteDiff(int a, int b)
{
	if(a>=b)
	{
		return a-b;
	}
	return b-a;
}

int main()
{
	int q,x,y,z,i,*ans,A,B;
	scanf("%d",&q);
	ans=(int *)malloc(q*sizeof(int));
	for(i=0;i<q;i++)
	{
		scanf("%d %d %d",&x,&y,&z);
		A=AbsoluteDiff(x,z);
		B=AbsoluteDiff(y,z);
		if(A==B)
			*(ans+i)=0;
		else if(A<B)
			*(ans+i)=1;
		else if(A>B)
			*(ans+i)=2;
	}
	for(i=0;i<q;i++)
	{
		if(*(ans+i)==0)
			printf("Mouse C");
		else if(*(ans+i)==1)
			printf("Cat A");
		else if(*(ans+i)==2)
			printf("Cat B");
		printf("\n");
	}
	return 0;
}
