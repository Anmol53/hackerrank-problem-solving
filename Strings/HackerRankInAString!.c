/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[10001],hr[11];
    int q,len,i,j;
    strcpy(hr,"hackerrank");
    scanf("%d",&q);
    while(q--)
    {
        scanf("%s",str);
        len=strlen(str);
        for(i=0,j=0;i<len;i++)
        {
            if(str[i]==hr[j])
                j++;
        }
        if(j==10)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
