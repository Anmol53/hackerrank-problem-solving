/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

int main() {
    int x1,v1,x2,v2,A,B; 
    scanf("%i %i %i %i", &x1, &v1, &x2, &v2);
    if(x1==x2)
    {
        printf("YES");
        return 0;
    }
    if(x1>x2)
    {
        swap(&x1,&x2);
        swap(&v1,&v2);
    }
    A=x1;
    B=x2;
    if(v1<=v2)
    {
        printf("NO");
        return 0;
    }        
    else
    {
        while(A<B)
        {
            A+=v1;
            B+=v2;
        }
        if(A==B)
        {
            printf("YES");
            return 0;
        }
        else
        {
            printf("NO");
            return 0;
        }           
    }
}
