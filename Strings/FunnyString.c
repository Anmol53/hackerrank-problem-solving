/*
*
* @author : Anmol Agrawal
*
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int Absolute(int a)
{
    if(a<0)
    {
        return a*(-1);
    }
    else
        return a;
}

int funnyString(char* s){
    int l,i,j,*a;
    l=strlen(s);
    a=(int *)malloc(l*sizeof(int));
    for(i=1;i<l;i++)
    {
        *(a+i-1)=Absolute(*(s+i)-*(s+i-1));
    }
    for(i=0,j=l-2;i<(l/2);i++,j--)
    {
        if(*(a+i)!=*(a+j))
        {
            return 0;
        }
    }
    return 1;
}

int main() {
    int q; 
    scanf("%i", &q);
    for(int a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        int result_size;
        int result = funnyString(s);
        if(result==0)
        {
            printf("Not Funny\n");
        }
        else if (result==1)
        {
            printf("Funny\n");
        }
    }
    return 0;
}

