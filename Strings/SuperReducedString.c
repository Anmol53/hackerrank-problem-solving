/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <string.h>

void SuperReducedString(char * s,char * u)
{
    int i,j=0,len,count;
    char a,t[102];
    len=strlen(s);
    *(s+len)='A';
    *(s+len+1)='\0';
    a=*s;
    count=1;
    for(i=1;i<=len;i++)
    {
        if(s[i]==a)
            count++;
        else
        {
            if(count%2!=0)
            {
                t[j]=a;
                j++;
            }
            a=s[i];
            count=1;
        }
    }
    t[j]='\0';
    *(s+len)='\0';
    if(strcmp(s,t)==0)
    {
        strcpy(u,t);        
    }
    else
    {
        SuperReducedString(t,u);
    }
}
int main()
{
    int i,len;
    char s[102],u[102];
    scanf("%s",s);
    SuperReducedString(s,u);
    len=strlen(u);
    if(len==0)
        printf("Empty String");
    else
        printf("%s",u);
    return 0;
}
