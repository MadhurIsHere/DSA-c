#include<stdio.h>
int main()
{
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int nze=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]!=0)
            {
                nze++;
            }
        }
    }
    int sparse[3][nze];
    int k=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]!=0)
            {
                sparse[0][k]=i;
                sparse[1][k]=j;
                sparse[2][k]=arr[i][j];
                k++;
            }
        }
    }
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<nze;j++)
            {
                printf(" %d ",sparse[i][j]);
            }
            printf("\n");
        }
}