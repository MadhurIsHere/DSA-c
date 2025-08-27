#include<stdio.h>
int maxed(int* arr,int n)
{
    //max element
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
}
void Count(int* arr,int n)
{
    //max element
    int max=maxed(arr,n);
    //putting 0 at each index
    int count[max+1];
    for(int i=0;i<=max;i++)
    {
        count[i]=0;
    }
    //counting the number of elements
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    // putting the elements at their right position
    int index=0;
    for(int i=0;i<=max;i++)
    {
        while(count[i]>0)
        {
            arr[index++]=i;
            count[i]--;
        }
    }
}
int main()
{
    int arr[]={2,1,3,4,3,3,2,1,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    Count(arr,size);
    for(int i=0;i<size;i++)
    {
        printf(" %d ",arr[i]);
    }
    return 0;
}