/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,*arr,i,j,k,x,y,d,count=0;
    scanf("%d %d",&n,&d);
    arr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            x=*(arr+j)-*(arr+i);
            if(x>d)
            {
                break;
            }
            else if (x==d)
            {
                for(k=j+1;k<n;k++)
                {
                    y=*(arr+k)-*(arr+j);
                    if(y>d)
                    {
                        break;
                    }
                    else if (y==d)
                    {
                        count++;
                        break;
                    }         
                }
                break;
            }
        }
    }
    printf("%d",count);
    return 0;
}

