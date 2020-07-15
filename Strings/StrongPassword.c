/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,lc=1,uc=1,sp=1,dig=1,x,y;
    char *str;
    scanf("%d",&n);
    str=(char *)malloc((n+1)*sizeof(char));
    scanf("%s",str);
    for(i=0;i<n;i++)
    {
        if(str[i]>=97 && str[i]<=122)
           lc=0;
        if(str[i]>=65 && str[i]<=90)
           uc=0;
        if(str[i]=='!' || str[i]=='@' || str[i]=='#' || str[i]=='$' || str[i]=='%' || str[i]=='^' || str[i]=='&' ||  str[i]=='*' ||  str[i]=='(' ||  str[i]==')' ||  str[i]=='-' || str[i]=='+')
           sp=0;
        if(str[i]>=48 && str[i]<=57)
           dig=0;
        if(lc+uc+sp+dig==0)
            break;
    }
    x=lc+uc+sp+dig;
    y=6-n;
    if(n>6)
        printf("%d",x);
    else
    {
        if(y>x)
            x=y;
        printf("%d",x);
    }
    return 0;
}
