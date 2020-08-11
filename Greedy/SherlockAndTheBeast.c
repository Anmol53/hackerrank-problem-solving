#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t, i, j, *n;
	scanf("%d",&t);
	n=(int *)malloc(t*sizeof(int));
	for(i=0;i<t;i++)
	{
		scanf("%d",n+i);
	}
	for(i=0;i<t;i++)
	{
		if(*(n+i)%3==0)
		{
			for(j=0;j<*(n+i);j++)
			{
				printf("%d",5);
			}
		}
		else if(*(n+i)%3==1)
		{
			if(*(n+i)-10>=0)
			{
				for(j=0;j<*(n+i)-10;j++)
				{
					printf("%d",5);
				}	
				for(j=*(n+i)-10;j<*(n+i);j++)
				{
					printf("%d",3);
				}	
			}
            else
            {
                printf("%d",-1);
            }
		}
		else if(*(n+i)%3==2)
		{
			if(*(n+i)-5>=0)
			{
				for(j=0;j<*(n+i)-5;j++)
				{
					printf("%d",5);
				}	
				for(j=*(n+i)-5;j<*(n+i);j++)
				{
					printf("%d",3);
				}	
			}
            else
            {
                printf("%d",-1);
            }            
		}
        printf("\n");
	}
}