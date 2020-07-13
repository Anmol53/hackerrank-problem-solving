/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int MaxValue(int * arr, int n)
{
	int i, temp=*(arr);
	for(i=1;i<n;i++)
	{
		if(temp<*(arr+i))
		{
			temp=*(arr+i);
		}
	}
	return temp;
}

int MinValue(int * arr, int n)
{
	int i, temp=*(arr+n-1);
	for(i=1;i<n;i++)
	{
		if(temp>*(arr+i))
		{
			temp=*(arr+i);
		}
	}
	return temp;
}

int getTotalX(int n, int* a, int m, int* b)
{
    int A,B,i,j,count=0;
    A=MaxValue(a,n);
    B=MinValue(b,m);
    for(i=A;i<=B;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i%*(a+j)!=0)
            {
                break;
            }
        }
        if(j==n)
        {
            for(j=0;j<m;j++)
            {
                if(*(b+j)%i!=0)
                {
                    break;
                }
            }
            if(j==m)
            {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n; 
    int m; 
    scanf("%i %i", &n, &m);
    int *a = malloc(sizeof(int) * n);
    for (int a_i = 0; a_i < n; a_i++) {
       scanf("%i",&a[a_i]);
    }
    int *b = malloc(sizeof(int) * m);
    for (int b_i = 0; b_i < m; b_i++) {
       scanf("%i",&b[b_i]);
    }
    int total = getTotalX(n, a, m, b);
    printf("%d\n", total);
    return 0;
}

