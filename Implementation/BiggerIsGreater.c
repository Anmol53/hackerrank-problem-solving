/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <string.h>

void insertionSortCharacter(char *p,int n)
{
	int i,j;
	char key;
	for(i=0;i<n;i++)
	{
		key=*(p+i);
		j=i-1;
		while(j>=0&&(*(p+j))>key)
		{
			*(p+j+1)=*(p+j);
			j=j-1;
		}
		*(p+j+1)=key;
	}
}

int main()
{
    int t,len,i,j,temp;
    char w[101];
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %s",w);
        len=strlen(w);
        for(i=len-1;i>0;i--)
        {
            if(*(w+i)>*(w+i-1))
            {
                insertionSortCharacter(w+i,len-i);
                for(j=i;j<len;j++)
                {
                    if(*(w+j)>*(w+i-1))
                    {
                        temp=*(w+j);
                        *(w+j)=*(w+i-1);
                        *(w+i-1)=temp;
                        break;
                    }
                }
                insertionSortCharacter(w+i,len-i);
                printf("%s\n",w);
                break;
            }
        }
        if(i==0)
            printf("no answer\n");
    }
    return 0;
}
