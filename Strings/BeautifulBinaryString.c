/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,count=0;
    char *str;
    scanf("%d",&n);
    str=(char *)malloc((n+1)*sizeof(char));
    scanf("%s",str);
    for(i=2;i<n;i++)
    {
        if(*(str+i)=='0' && *(str+i-1)=='1' && *(str+i-2)=='0')
        {
            *(str+i)=1;
            count++;
        }
    }
    printf("%d",count);
}
