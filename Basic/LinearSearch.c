#include <stdio.h>
int main ()
{
    int n,loc=-1;
    printf("Enter the length of the array");
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int item;
    printf("Enter the element to be found ");
    scanf("%d",&item);
    for(int i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            loc=i;
            break;
        }
        
    }
    
    if(loc==-1)
    {
        printf("The element is not found");
    }
    else
    {
        printf("%d",loc);
    }
    return 0;
}