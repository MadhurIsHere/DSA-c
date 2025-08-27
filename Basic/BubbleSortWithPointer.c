#include <stdio.h>
void Swap(int *arr,int i,int j)
{
    arr[i]=arr[i]+arr[j];
    arr[j]=arr[i]-arr[j];
    arr[i]=arr[i]-arr[j];
}
void BubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for (int j=1;j<n-i;j++)
        {
            if(arr[j-1]>arr[j])
            {
                Swap(arr,j,j-1);
            }   
        }
    }
}
int main ()
{
    int n;
    printf("Enter the number of element");
    scanf("%d",&n);
    printf("Enter the elements");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    BubbleSort(a,n);
    for(int i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
    return 0;
}