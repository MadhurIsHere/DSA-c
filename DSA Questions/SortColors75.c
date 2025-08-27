#include <stdio.h>

void sortColors(int* nums, int numsSize) {
    int zero=0;
    int one=0;
    int two=0;
    for (int i=0;i<numsSize;i++)
    {
        if(nums[i]==0)
        {
            zero++;
        }
        else if(nums[i]==1)
        {
            one++;
        }
        else
        {
            two++;
        }
        for(int i=0;i<zero;i++)
        {
            nums[i]=0;
        }
        for(int i=zero;i<zero+one;i++)
        {
            nums[i]=1;
        }
        for(int i=zero+one;i<zero+one+two;i++)
        {
            nums[i]=2;
        }
    }
}
int main()
{
    int a[]={2,0,2,1,1,0};
    int n=sizeof(a)/sizeof(a[0]);
    sortColors(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}