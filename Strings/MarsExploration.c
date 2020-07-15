/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len,count=0;
    scanf("%s",str);
    len=strlen(str);
    while(len--)
    {
        if(len==0 || len==2)
        {
            if(str[len]!='S')
                count++;
        }
        else if(len==1)
        {
            if(str[len]!='O')
                count++;
        }
        else if(len%3==0 || len%3==2)
        {
            if(str[len]!='S')
                count++;
        }
        else
        {
            if(str[len]!='O')
                count++;
        }
    }
    printf("%d",count);
    return 0;
}
