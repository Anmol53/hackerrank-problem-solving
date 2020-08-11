#include <stdio.h>
#include <stdlib.h>

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

int GridChallenge()
{
	int i,j,n;
	char temp,a[100][100];
	for(i=0;i<100;i++)
	{
		for(j=0;j<100;j++)
		{
			a[i][j]=123;
		}
	}
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf(" %c",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		insertionSortCharacter(a[i],100);
	}
	for(j=0;j<n;j++)
	{
		temp=0;
		for(i=0;i<n;i++)
		{
			if(temp>a[i][j])
			{
				return 0;
			}
			temp=a[i][j];
		}
	}
	return 1;
}

int main()
{
	int k,t,*ans;
	scanf("%d",&t);
	ans=(int *)malloc(t*sizeof(int));
	for(k=0;k<t;k++)
	{
		*(ans+k)=GridChallenge();
	}
	for(k=0;k<t;k++)
	{
		if(*(ans+k)==0)
		{
			printf("NO\n");
		}
		else if(*(ans+k)==1)
		{
			printf("YES\n");
		}
	}
	return 0;
}