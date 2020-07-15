/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <string.h>

int main()
{
    unsigned long t,i,j,k,l,m,n,len,maxl,arr[32],nine;
    char str[33];
    scanf("%lu",&t);
    while(t--)
    {
        scanf("%s",str);
        len=strlen(str);
        maxl=len/2;
        for(i=1;i<=maxl;i++)
        {
            for(j=0;j<len;j++)
            {
                arr[j]=0;
            }
            k=0;
            l=0;
            m=i;
            nine=9;
            for(j=0;j<len;j++)
            {
                arr[k]=(arr[k]*10)+str[j]-'0';
                if(l==0 && str[j]=='0')
                {
                    break;
                }
                if(str[j]!='9')
                {
                    nine=str[j]-'0';
                }
                l++;
                if(l==m)
                {
                    if(nine==9)
                    {
                        m++;
                    }
                    l=0;
                    k++;
                    nine=9;
                }
            }
            if(j==len    &&    l==0)
            {
                for(n=1;n<k;n++)
                {
                    if(arr[n]!=(arr[n-1]+1))
                    {
                        break;
                    }
                }
                if(n==k)
                {
                    printf("YES %lu\n",arr[0]);
                    break;
                }
            }
        }
        if(i==(maxl+1))
        {
            printf("NO\n");
        }
    }
    return 0;
}
