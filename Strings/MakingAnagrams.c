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
    int slen,tlen,i,j,del=0;
    char s[10001],t[10001];
    scanf("%s",s);
    scanf("%s",t);
    slen=strlen(s);
    tlen=strlen(t);
    mergeSort(s,0,slen-1);
    mergeSort(t,0,tlen-1);
    i=j=0;
    while(s[i]!='\0' || t[j]!='\0')
    {
        if(s[i]=='\0')
        {
            j++;
            del++;
        }
        else if(t[j]=='\0')
        {
            i++;
            del++;
        }
        else if(s[i]>t[j])
        {
            j++;
            del++;
        }
        else if(s[i]<t[j])
        {
            i++;
            del++;
        }
        else
        {
            i++;
            j++;
        }
    }
    printf("%d",del);
    return 0;
}
