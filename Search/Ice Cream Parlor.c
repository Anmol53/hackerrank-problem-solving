/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t,tc,i,j,pair,m,n,*arr,*ans1,*ans2;
    scanf("%d",&t);
    ans1=(int *)malloc(t*sizeof(int));
    ans2=(int *)malloc(t*sizeof(int));
    for(tc=0;tc<t;tc++){
        scanf("%d %d",&m,&n);
        arr=(int *)malloc(n*sizeof(int));
        for(i=0;i<n;i++){
            scanf("%d",arr+i);
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                pair=*(arr+i)+*(arr+j);
                if(pair==m){
                    *(ans1+tc)=i+1;
                    *(ans2+tc)=j+1;
                    break;
                }
            }
            if(j!=n){
                break;
            }
        }
    }
    for(tc=0;tc<t;tc++){
        printf("%d %d\n",*(ans1+tc),*(ans2+tc));
    }
    return 0;
}

