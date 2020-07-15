/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,i,j;
    char *str;
    scanf("%d",&n);
    str=(char *)malloc(n*sizeof(char));
    scanf("%s",str);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(*(str+i)>=97 && *(str+i)<=122)
        {
            j=*(str+i)+k;
            for(;j>122;)
                j=j-26;
            printf("%c",j);
        }
        else if(*(str+i)>=65 && *(str+i)<=90)
        {
            j=*(str+i)+k;
            for(;j>90;)
                j=j-26;
            printf("%c",j);
        }
        else
        {
            printf("%c",*(str+i));
        }
    }
    return 0;
}
