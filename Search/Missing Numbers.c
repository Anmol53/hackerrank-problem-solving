/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++){
        L[i] = arr[l + i];
    }
    for (j = 0; j < n2; j++){
        R[j] = arr[m + 1+ j];
    }
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2){
        if (L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r){
    if (l < r){
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int main(){
	int i,j,k,l=0,n,m,temp,*A,*B,*C;
	scanf("%d",&n);
	A=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",A+i);
	}
	scanf("%d",&m);
	B=(int *)malloc(m*sizeof(int));
	for(i=0;i<m;i++){
		scanf("%d",B+i);
	}
	C=(int *)malloc((m-n)*sizeof(int));
    mergeSort(A,0,n-1);
    mergeSort(B,0,m-1);
    k=0;
    for(i=0;i<m;i++){
        for(j=k;j<n;j++){
            if(*(B+i)<*(A+j)){
                *(C+l)=*(B+i);
                l++;
                k=j;
                break;
            }
            else if(*(B+i)==*(A+j)){
                k=j+1;
                break;
            }
        }
        if(j==n){
            *(C+l)=*(B+i);
            l++;
        }
    }
    temp=0;
    for(i=0;i<l;i++){
        if(temp!=*(C+i)){
            printf("%d ",*(C+i));
            temp=*(C+i);
        }
    }
    return 0;
}
