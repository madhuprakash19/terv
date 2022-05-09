#include <stdio.h>

int main()
{
    float n;
    scanf("%f", &n);
    float ans = 0;
    while (n >= 1)
    {
        ans = ans + (1 / n);
        n = n - 1;
    }
    printf("%0.1f", ans);
    return 0;
}