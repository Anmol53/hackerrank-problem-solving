/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void merge(char arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    char L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(char arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    int len,count,i,freq,temp;
    char str[100001];
    scanf("%s",str);
    len=strlen(str);
    mergeSort(str,0,len-1);
    temp=*str;
    freq=1;
    count=0;
    for(i=1;i<len;i++)
    {
        if(*(str+i)==temp)
            freq++;
        else
        {
            if(freq%2!=0)
                count++;
            temp=*(str+i);
            freq=1;
        }
    }
    if(count<=1)
        printf("YES");
    else
        printf("NO");
}
