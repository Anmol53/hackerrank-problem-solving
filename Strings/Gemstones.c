/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int n,t,len,alpha[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},a=0,i,count=0;
    char str[101];
    scanf("%d",&n);
    t=n;
    while(t--)
    {
        scanf("%s",str);
        len=strlen(str);
        for(i=0;i<len;i++)
        {
            if(alpha[str[i]-97]==a)
            {
                alpha[str[i]-97]=alpha[str[i]-97]+1;
            }
        }
        a++;
    }
    for(i=0;i<26;i++)
    {
        if(alpha[i]==n)
            count++;
    }
    printf("%d",count);
    return 0;
}
