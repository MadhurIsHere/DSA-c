#include <stdio.h>
int BinarySearch(int a[],int target,int start,int end)
{
    int mid;
    for(;start<=end;)
    {
        mid=(int)(start+(end-start)/2);
        if(a[mid]==target)
        {
            return mid;
        }
        if(a[mid]>=target)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }

    return -1;
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
    int target;
    printf("Enter the element to be founnd ");
    scanf("%d",&target);
    int ans=BinarySearch(a,target,0,n-1);
    printf("%d",ans);
    return 0;
}