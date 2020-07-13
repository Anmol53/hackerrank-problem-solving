/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int k,slen,tlen,i,x;
    char s[101],t[101];
    scanf(" %s",s);
    slen=strlen(s);
    scanf(" %s",t);
    tlen=strlen(t);
    scanf("%d",&k);
    for(i=0;i<slen;)
    {
        if(*(s+i)!=*(t+i))
            break;
        else
            i++;
    }
    x=(slen-i)+(tlen-i);
    if(k==x)
        printf("Yes");
    else if(k>x)
    {
        k=k-x;
        if(k%2==0 || k>(2*i))
            printf("Yes");
        else
            printf("No");
    }
    else
        printf("No");
    return 0;
}
