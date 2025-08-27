#include <stdio.h>
int main()
{
    int a[] = {1, 2, 6, 7, 9, 10};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n - i ; j++)
        {
            if (a[j - 1] > a[j])
            {
                a[j - 1] = a[j - 1] + a[j];
                a[j] = a[j - 1] - a[j];
                a[j - 1] = a[j - 1] - a[j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
}
