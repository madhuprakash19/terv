#include <stdio.h>

int check(int n)
{
    int l = 0;
    int h = n;
    int m;
    while (l <= h)
    {
        m = (l + h) / 2;
        if ((m * m) == n)
        {
            return 1;
        }
        if ((m * m) > n)
        {
            h = m - 1;
        }
        if ((m * m) < n)
        {
            l = m + 1;
        }
    }
    return -1;
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    if (n * m < 2)
    {
        printf("Yes");
        return 0;
    }
    int ans = check(n * m);
    if (ans == 1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}