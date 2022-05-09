#include <stdio.h>

int main()
{
    int num, a, b, n, s;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d%d%d%d", &a, &b, &n, &s);
        if (((a * n) + b) >= s)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}