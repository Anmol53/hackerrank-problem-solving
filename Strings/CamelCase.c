/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100001];
    int i,count=0,len;
    scanf("%s",str);
    len=strlen(str);
    if(len)
    {
        count++;
        for(i=0;i<len;i++)
            if(str[i]>=65 && str[i]<=90)
                count++;
    }
    printf("%d",count);
    return 0;
}
