#include <stdio.h>

int main()
{
    int n, a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int temp = a[n - 1];
    a[n - 1] = a[0];
    a[0] = temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}