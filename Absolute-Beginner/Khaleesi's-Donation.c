#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    int n2, n1, ans;
    scanf("%d%d", &n1, &n2);
    ans = gcd(n1, n2);
    printf("%d", ans);
    return 0;
}