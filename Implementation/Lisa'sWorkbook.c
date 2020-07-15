/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,k,*arr,i,j,pg=0,sp=0,prob;
    scanf("%d %d",&n,&k);
    arr=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",arr+i);
    for(i=0;i<n;i++)
    {
        prob=0;
        pg++;
        for(j=0;j<*(arr+i);j++)
        {
            prob++;
            if(prob==pg)
                sp++;
            if(prob%k==0  &&  prob!=*(arr+i))
                pg++;
        }
    }
    printf("%d",sp);
	return 0;
}
