/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
int main()
{
    int i,p;
    char a;
    int S1[26],S2[26];
    scanf("%d",&p);
    a=getchar();
    while(p--)
    {
        for(i=0;i<26;i++)
        {
            S1[i]=0;
            S2[i]=0;
        }
        do
        {
            a=getchar();
            S1[a-'a']=1;            
        }while(a>='a'   &&  a<='z');
        do
        {
            a=getchar();
            S2[a-'a']=1;            
        }while(a>='a'   &&  a<='z');
        for(i=0;i<26;i++)
        {
            if(S1[i]==S2[i] &&  S1[i]==1)
            {
                printf("YES\n");
                break;
            }
        }
        if(i==26)
        {
            printf("NO\n");
        }
    }
    return 0;
}
