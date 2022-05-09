#include <stdio.h>

int main()
{
    int m, n, sum1 = 0, sum2 = 0;
    scanf("%d%d", &m, &n);
    for (int i = 1; i < m; i++)
    {
        if ((m % i) == 0)
        {
            sum1 += i;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if ((n % i) == 0)
        {
            sum2 += i;
        }
    }
    if (sum1 == n && sum2 == m)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}