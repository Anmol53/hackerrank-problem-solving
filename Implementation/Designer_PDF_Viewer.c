/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int i,h[26],w,c,temp=0;
    char str[11];
    for(i=0;i<26;i++)
    {
        scanf("%d",&h[i]);
    }
    fflush(stdin);
    scanf("%s",str);
    w=strlen(str);
    for(i=0;i<w;i++)
    {
        c=str[i]-97;
        if(temp<h[c])
        {
            temp=h[c];
        }
    }
    printf("%d",temp*w);
    return 0;
}
