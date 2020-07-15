/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,n,a; 
    scanf("%d", &n);
    int *grade = malloc(sizeof(int) * n);
    for(i = 0;i < n;i++)
    {
       scanf("%d",&grade[i]);
       if(grade[i]>37)
       {
           a=grade[i]/5;
           a++;
           a*=5;
           if((a-grade[i])<3)
           {
               grade[i]=a;
           }
       }
    }
    for(i = 0; i < n;i++)
    {
        printf("%d\n",grade[i]);
    }
    return 0;
}
