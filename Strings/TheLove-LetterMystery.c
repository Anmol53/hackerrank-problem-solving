/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <string.h>

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
    char str[10001];
    int q,len,i,j,count;
    scanf("%d",&q);
    while(q--)
    {
        count=0;
        scanf("%s",str);
        len=strlen(str);
        for(i=0,j=len;i<len/2;i++)
        {
            j--;
            count+=AbsoluteDiff(*(str+i),*(str+j));
        }
        printf("%d\n",count);
    }
    return 0;
}
