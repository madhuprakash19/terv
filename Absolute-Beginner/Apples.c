#include <stdio.h>

int main()
{
    int n, a[10000], i = 0, check;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    check = 2 * (a[1] - a[0]);
    for (i = 0; i < n; i++)
    {
        if (check == (a[i + 1] - a[i]))
            printf("%d", (a[i] + (check / 2)));
    }

    return 0;
}