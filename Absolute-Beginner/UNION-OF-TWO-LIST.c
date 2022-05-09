#include <stdio.h>

int main()
{
    int n1, n, n2, check = -1;
    scanf("%d%d", &n1, &n2);
    n = n1 + n2;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > check)
        {
            printf("%d ", a[i]);
            check = a[i];
        }
    }
    return 0;
}