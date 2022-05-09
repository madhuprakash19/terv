#include <stdio.h>

int main()
{
    int n, temp, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        if (temp % 2 == 0)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}