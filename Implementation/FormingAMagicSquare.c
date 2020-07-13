/*
*
* @author : Anmol Agrawal
*
*/
#include <stdio.h>
#include <stdlib.h>

int absol(int a, int b)
{
    if(a>=b)
        return a-b;
    else
        return b-a;
}
int main()
{
    int arr[3][3],i,j,temp1=0,temp2=0,temp3=0,temp4=0,temp5=0,temp6=0,temp7=0,temp8=0;
    int brr[3][3]={{2,7,6},{9,5,1},{4,3,8}},crr[3][3]={{4,9,2},{3,5,7},{8,1,6}},drr[3][3]={{8,3,4},{1,5,9},{6,7,2}},err[3][3]={{6,1,8},{7,5,3},{2,9,4}},frr[3][3]={{4,3,8},{9,5,1},{2,7,6}},grr[3][3]={{8,1,6},{3,5,7},{4,9,2}},hrr[3][3]={{6,7,2},{1,5,9},{8,3,4}},irr[3][3]={{2,9,4},{7,5,3},{6,1,8}};
    for(i=0;i<3;i++)
    {
        scanf("%d %d %d",&arr[i][0],&arr[i][1],&arr[i][2]);
    }
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            temp1+=absol(arr[i][j],brr[i][j]);
            temp2+=absol(arr[i][j],crr[i][j]);
            temp3+=absol(arr[i][j],drr[i][j]);
            temp4+=absol(arr[i][j],err[i][j]);
            temp5+=absol(arr[i][j],frr[i][j]);
            temp6+=absol(arr[i][j],grr[i][j]);
            temp7+=absol(arr[i][j],hrr[i][j]);
            temp8+=absol(arr[i][j],irr[i][j]);
        }
    if(temp1<temp2)
    {
        temp2=temp1;
    }
    if(temp2<temp3)
    {
        temp3=temp2;
    }
    if(temp3<temp4)
    {
        temp4=temp3;
    }
    if(temp4<temp5)
    {
        temp5=temp4;
    }
    if(temp5<temp6)
    {
        temp6=temp5;
    }
    if(temp6<temp7)
    {
        temp7=temp6;
    }
    if(temp7<temp8)
    {
        temp8=temp7;
    }
    printf("%d",temp8);
    return 0;
}
