/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int t,i,len,count;
    char str[100001];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str);
        len=strlen(str);
        count=0;
        for(i=1;i<len;i++)
        {
            if(*(str+i)==*(str+i-1))
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
