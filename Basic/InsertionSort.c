#include <stdio.h>

void swap(int *a, int i, int j)
{
    a[i] = a[i] + a[j];
    a[j] = a[i] - a[j];
    a[i] = a[i] - a[j];
}

int main()
{
    int a[] = {1, 6, 7, 2, 8, 3};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            if (*(a + j) < *(a + j - 1))
            {
                swap(a, j, j - 1);
            }
            else
            {
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}