/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,j; 
    scanf("%d",&n);
    char* *grid = malloc(sizeof(char*) * n);
    for(i = 0; i < n; i++){
       grid[i] = (char *)malloc(10240 * sizeof(char));
       scanf("%s",grid[i]);
    }
    for(i=1;i<n-1;i++)
    {
        for(j=1;j<n-1;j++)
        {
            if(*(grid[i]+j)>*(grid[i]+j+1)&&*(grid[i]+j)>*(grid[i]+j-1)&&*(grid[i]+j)>*(grid[i-1]+j)&&*(grid[i]+j)>*(grid[i+1]+j))
            {
                *(grid[i]+j)='X';
            }
        }
    }
    for(i = 0; i < n; i++)
    {
       printf("%s",grid[i]);
       printf("\n");
    }
    return 0;
}
