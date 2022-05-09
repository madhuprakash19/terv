#include <stdio.h>

int main()
{
    int m, n, l, i, ans;
    scanf("%d%d", &n, &m);
    ans = m % (n * n);
    printf("%d", ans);
    return 0;
}