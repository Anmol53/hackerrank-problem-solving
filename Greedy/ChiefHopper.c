#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, *arr, e, i;
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    for(i = 0; i < n; i++){
        scanf("%d", arr + i);
    }
    e = 0;
    for(i = n - 1; i >= 0; i--){
        e = (e + *(arr + i) + 1) / 2;
    }
    printf("%d", e);
    return 0;
}