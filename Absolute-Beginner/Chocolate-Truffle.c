#include <stdio.h>

int fib(int n)
{
    if (n < 3)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    int ans = fib(n);
    printf("%d", ans);
    return 0;
}